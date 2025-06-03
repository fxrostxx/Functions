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

	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(arr, n) << endl;
	int shiftStep;
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� �����:" << endl;
	ShiftLeft(arr, n, shiftStep);
	printArr(arr, n);
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� ������:" << endl;
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

	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(brr, SIZE) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(brr, SIZE) << endl;
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� �����:" << endl;
	ShiftLeft(brr, SIZE, shiftStep);
	printArr(brr, SIZE);
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� ������:" << endl;
	ShiftRight(brr, SIZE, shiftStep);
	printArr(brr, SIZE);

	cout << endl;

	int arr2D[ROWS][COLS];

	fillArr(arr2D, ROWS, COLS);
	printArr(arr2D, ROWS, COLS);
	sortArr(arr2D, ROWS, COLS);
	printArr(arr2D, ROWS, COLS);

	cout << endl;

	cout << "����� ��������� �������: " << Sum(arr2D, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr2D, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(arr2D, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(arr2D, ROWS, COLS) << endl;
	shiftStep;
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� �����:" << endl;
	ShiftLeft(arr2D, ROWS, COLS, shiftStep);
	printArr(arr2D, ROWS, COLS);
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� ������:" << endl;
	ShiftRight(arr2D, ROWS, COLS, shiftStep);
	printArr(arr2D, ROWS, COLS);

	cout << endl;

	double brr2D[ROWS][COLS];

	fillArr(brr2D, ROWS, COLS);
	printArr(brr2D, ROWS, COLS);
	sortArr(brr2D, ROWS, COLS);
	printArr(brr2D, ROWS, COLS);

	cout << endl;

	cout << "����� ��������� �������: " << Sum(brr2D, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr2D, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << MinValueIn(brr2D, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << MaxValueIn(brr2D, ROWS, COLS) << endl;
	shiftStep;
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� �����:" << endl;
	ShiftLeft(brr2D, ROWS, COLS, shiftStep);
	printArr(brr2D, ROWS, COLS);
	cout << "������� ���������� �������: ";
	cin >> shiftStep;
	cout << "����� ������� �� " << shiftStep << " ��������� ������:" << endl;
	ShiftRight(brr2D, ROWS, COLS, shiftStep);
	printArr(brr2D, ROWS, COLS);

	return 0;
}