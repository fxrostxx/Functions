#include "stdafx.h"
#include "constants.h"
#include "FillArr.h"
#include "PrintArr.h"
#include "PrintArr.cpp"
#include "SortArr.h"
#include "SortArr.cpp"
#include "Statistics.h"
#include "Statistics.cpp"
#include "Shift.h"
#include "Shift.cpp"

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