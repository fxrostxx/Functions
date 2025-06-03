#include <iostream>
#include <stdafx.h>
#include <constants.h>
#include <FillArr.h>
#include <PrintArr.h>
#include <SortArr.h>
#include <Statistics.h>
#include <Shift.h>


int main()
{
	setlocale(LC_ALL, "rus");

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
	int shiftStep;
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

	return 0;
}