#include "PrintArr.h"

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