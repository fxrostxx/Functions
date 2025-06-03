#include "SortArr.h"

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