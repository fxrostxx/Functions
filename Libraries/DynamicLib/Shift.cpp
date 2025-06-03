#include "Shift.h"

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