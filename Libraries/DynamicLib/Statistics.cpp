#include "Statistics.h"

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