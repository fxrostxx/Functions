#include "FillArr.h"

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