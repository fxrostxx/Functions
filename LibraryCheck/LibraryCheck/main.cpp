/*
https://stackoverflow.com/questions/5416872/using-export-keyword-with-templates
https://devblogs.microsoft.com/cppblog/a-tour-of-cpp-modules-in-visual-studio/
https://thecodehound.com/modules-in-c20/
*/

#include <stdafx.h>
#include <constants.h>
#include <FillArr.h>
import PrintArr;
import SortArr;
import Statistics;
import Shift;


int main()
{
	setlocale(LC_ALL, "rus");

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
	int shiftStep;
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

	return 0;
}