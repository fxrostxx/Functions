#include <iostream>
using namespace std;

#define tab "\t"

void fillArr(int arr[], const int n, int minRand = 0, int maxRand = 100);
void fillArr(double arr[], const int n, int minRand = 0, int maxRand = 100);

void printArr(int arr[], const int n);
void printArr(double arr[], const int n);

void sortArr(int arr[], const int n);
void sortArr(double arr[], const int n);

int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);

double Avg(int arr[], const int n);
double Avg(float arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);

int MinValueIn(int arr[], const int n);
float MinValueIn(float arr[], const int n);
double MinValueIn(double arr[], const int n);
char MinValueIn(char arr[], const int n);

int MaxValueIn(int arr[], const int n);
float MaxValueIn(float arr[], const int n);
double MaxValueIn(double arr[], const int n);
char MaxValueIn(char arr[], const int n);

void ShiftLeft(int arr[], const int n, int shiftStep);
void ShiftLeft(float arr[], const int n, int shiftStep);
void ShiftLeft(double arr[], const int n, int shiftStep);
void ShiftLeft(char arr[], const int n, int shiftStep);

void ShiftRight(int arr[], const int n, int shiftStep);
void ShiftRight(float arr[], const int n, int shiftStep);
void ShiftRight(double arr[], const int n, int shiftStep);
void ShiftRight(char arr[], const int n, int shiftStep);

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
	int shiftStep = 4;
	cout << "Сдвиг массива на " << shiftStep << " элементов влево:" << endl;
	ShiftLeft(arr, n, shiftStep);
	printArr(arr, n);
	shiftStep = 2;
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
	shiftStep = 4;
	cout << "Сдвиг массива на " << shiftStep << " элементов влево:" << endl;
	ShiftLeft(brr, SIZE, shiftStep);
	printArr(brr, SIZE);
	shiftStep = 2;
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


void printArr(int arr[], const int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void printArr(double arr[], const int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void sortArr(int arr[], const int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void sortArr(double arr[], const int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[i])
			{
				double temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum{ 0 };
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int n)
{
	float sum{ 0 };
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum{ 0 };
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(char arr[], const int n)
{
	char sum{ 0 };
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	double avg = Sum(arr, n) / n;
	return avg;
}

double Avg(float arr[], const int n)
{
	double avg = Sum(arr, n) / n;
	return avg;
}

double Avg(double arr[], const int n)
{
	double avg = Sum(arr, n) / n;
	return avg;
}

double Avg(char arr[], const int n)
{
	double avg = Sum(arr, n) / n;
	return avg;
}

int MinValueIn(int arr[], const int n)
{
	int minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

float MinValueIn(float arr[], const int n)
{
	float minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

double MinValueIn(double arr[], const int n)
{
	double minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

char MinValueIn(char arr[], const int n)
{
	char minValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < minValue) minValue = arr[i];
	}
	return minValue;
}

int MaxValueIn(int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

float MaxValueIn(float arr[], const int n)
{
	float maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

double MaxValueIn(double arr[], const int n)
{
	double maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

char MaxValueIn(char arr[], const int n)
{
	char maxValue = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxValue) maxValue = arr[i];
	}
	return maxValue;
}

void ShiftLeft(int arr[], const int n, int shiftStep)
{
	int temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 0; j < n - 1; ++j)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}

void ShiftLeft(float arr[], const int n, int shiftStep)
{
	float temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 0; j < n - 1; ++j)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}

void ShiftLeft(double arr[], const int n, int shiftStep)
{
	double temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 0; j < n - 1; ++j)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}

void ShiftLeft(char arr[], const int n, int shiftStep)
{
	char temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[0];
		for (int j = 0; j < n - 1; ++j)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}

void ShiftRight(int arr[], const int n, int shiftStep)
{
	int temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[n - 1];
		for (int j = n - 1; j > 0; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
}

void ShiftRight(float arr[], const int n, int shiftStep)
{
	float temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[n - 1];
		for (int j = n - 1; j > 0; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
}

void ShiftRight(double arr[], const int n, int shiftStep)
{
	double temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[n - 1];
		for (int j = n - 1; j > 0; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
}

void ShiftRight(char arr[], const int n, int shiftStep)
{
	char temp;
	if (shiftStep > n) shiftStep %= n;
	for (int i = 0; i < shiftStep; ++i)
	{
		temp = arr[n - 1];
		for (int j = n - 1; j > 0; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
}