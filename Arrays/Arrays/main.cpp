#include "stdafx.h"
#include "constants.h"
#include "FillArr.h"
#include "PrintArr.h"
#include "SortArr.h"
#include "Statistics.h"
#include "Shift.h"

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