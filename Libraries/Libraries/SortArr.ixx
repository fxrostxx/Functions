module;

#include "stdafx.h"
#include "constants.h"

export module SortArr;

export template<typename T>
void sortArr(T arr[], const int n);
export template<typename T>
void sortArr(T arr[ROWS][COLS], const int ROWS, const int COLS);