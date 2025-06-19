module;

#include "stdafx.h"
#include "constants.h"

export module PrintArr;

export template<typename T>
void printArr(T arr[], const int n);
export template<typename T>
void printArr(T arr[ROWS][COLS], const int ROWS, const int COLS);