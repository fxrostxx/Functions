#include <stdafx.h>
#include <FillArr.h>
#include <PrintArr.h>
#include <SortArr.h>
#include <Statistics.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int n = 5;
	int arr[n];

	fillArr(arr, n);

	printArr(arr, n);

	cout << "Сумма элементов: " << Sum(arr, n) << endl;

	sortArr(arr, n);

	printArr(arr, n);

	return 0;
}