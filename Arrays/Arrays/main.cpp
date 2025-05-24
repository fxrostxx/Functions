#include <iostream>
using namespace std;

#define tab "\t"

const int ROWS{ 3 }, COLS{ 4 };

void fillArr(int arr[], const int n, int minRand = 0, int maxRand = 100);
void fillArr(double arr[], const int n, int minRand = 0, int maxRand = 100);
void fillArr(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void fillArr(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>
void printArr(T arr[], const int n);
template<typename T>
void printArr(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void sortArr(T arr[], const int n);
template<typename T>
void sortArr(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MinValueIn(T arr[], const int n);
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(T arr[], const int n);
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void ShiftLeft(T arr[], const int n, int shiftStep);
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shiftStep);

template<typename T>
void ShiftRight(T arr[], const int n, int shiftStep);
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shiftStep);

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

	cout << endl;

	int arr2D[ROWS][COLS];

	fillArr(arr2D, ROWS, COLS);
	printArr(arr2D, ROWS, COLS);
	sortArr(arr2D, ROWS, COLS);
	printArr(arr2D, ROWS, COLS);

	cout << endl;

	cout << "Сумма элементов массива: " << Sum(arr2D, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr2D, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr2D, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr2D, ROWS, COLS) << endl;
	shiftStep;
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов влево:" << endl;
	ShiftLeft(arr2D, ROWS, COLS, shiftStep);
	printArr(arr2D, ROWS, COLS);
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов вправо:" << endl;
	ShiftRight(arr2D, ROWS, COLS, shiftStep);
	printArr(arr2D, ROWS, COLS);

	cout << endl;

	double brr2D[ROWS][COLS];

	fillArr(brr2D, ROWS, COLS);
	printArr(brr2D, ROWS, COLS);
	sortArr(brr2D, ROWS, COLS);
	printArr(brr2D, ROWS, COLS);

	cout << endl;

	cout << "Сумма элементов массива: " << Sum(brr2D, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr2D, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr2D, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr2D, ROWS, COLS) << endl;
	shiftStep;
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов влево:" << endl;
	ShiftLeft(brr2D, ROWS, COLS, shiftStep);
	printArr(brr2D, ROWS, COLS);
	cout << "Введите количество сдвигов: ";
	cin >> shiftStep;
	cout << "Сдвиг массива на " << shiftStep << " элементов вправо:" << endl;
	ShiftRight(brr2D, ROWS, COLS, shiftStep);
	printArr(brr2D, ROWS, COLS);

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

void fillArr(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void fillArr(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
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
void printArr(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
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
void sortArr(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS; ++i)
	{
		for (int j = i + 1; j < ROWS * COLS; ++j)
		{
			if (arr[0][j] < arr[0][i])
			{
				T temp = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = temp;
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
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum{ 0 };
	for (int i = 0; i < ROWS * COLS; ++i) sum += arr[0][i];
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T minValue = arr[0][0];
	for (int i = 1; i < ROWS * COLS; ++i)
	{
		if (arr[0][i] < minValue) minValue = arr[0][i];
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
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T maxValue = arr[0][0];
	for (int i = 1; i < ROWS * COLS; ++i)
	{
		if (arr[0][i] > maxValue) maxValue = arr[0][i];
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
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shiftStep)
{
	T temp;
	if (shiftStep > ROWS * COLS) shiftStep %= (ROWS * COLS);
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0][0];
		for (int j = 1; j < ROWS * COLS; ++j)
		{
			arr[0][j - 1] = arr[0][j];
		}
		arr[0][ROWS * COLS - 1] = temp;
	}
}

template<typename T>
void ShiftRight(T arr[], const int n, int shiftStep)
{
	ShiftLeft(arr, n, n - shiftStep);
}

template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shiftStep)
{
	ShiftLeft(arr, ROWS, COLS, ROWS * COLS - shiftStep);
}