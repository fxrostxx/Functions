#include <iostream>
using namespace std;

#define tab "\t"

void fillArr(int arr[], const int n, int minRand = 0, int maxRand = 100);
void fillArr(double arr[], const int n, int minRand = 0, int maxRand = 100);

template<typename T>
void printArr(T arr[], const int n);

template<typename T>
void sortArr(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);

template<typename T>
T MinValueIn(T arr[], const int n);

template<typename T>
T MaxValueIn(T arr[], const int n);

template<typename T>
void ShiftLeft(T arr[], const int n, int shiftStep);

template<typename T>
void ShiftRight(T arr[], const int n, int shiftStep);

int main()
{
	setlocale(LC_ALL, "rus");
	//srand(time(NULL));

	const int n = 5;
	int arr[n];

	fillArr(arr, n);
	printArr(arr, n);
	sortArr(arr, n);
	printArr(arr, n);

	cout << endl;

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	int shiftStep;
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов влево:" << endl;
	ShiftLeft(arr, n, shiftStep);
	printArr(arr, n);
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов вправо:" << endl;
	ShiftRight(arr, n, shiftStep);
	printArr(arr, n);

	cout << endl;

	const int SIZE = 8;
	double brr[SIZE];
	fillArr(brr, SIZE);
	printArr(brr, SIZE);
	sortArr(brr, SIZE);
	printArr(brr, SIZE);

	cout << endl;

	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов влево:" << endl;
	ShiftLeft(brr, SIZE, shiftStep);
	printArr(brr, SIZE);
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов вправо:" << endl;
	ShiftRight(brr, SIZE, shiftStep);
	printArr(brr, SIZE);

	return 0;
}

void fillArr(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void fillArr(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

template<typename T>
void printArr(T arr[], const int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>
void sortArr(T arr[], const int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[i])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

template<typename T>
T Sum(T arr[], const int n)
{
	T sum{ 0 };
	for (int i = 0; i < n; ++i) sum += arr[i];
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>
T MinValueIn(T arr[], const int n)
{
	T minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

template<typename T>
T MaxValueIn(T arr[], const int n)
{
	T maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

template<typename T>
void ShiftLeft(T arr[], const int n, int shiftStep)
{
	T temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 1; j < n; ++j)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = temp;
	}
}

template<typename T>
void ShiftRight(T arr[], const int n, int shiftStep)
{
	ShiftLeft(arr, n, n - shiftStep);
}