module;

#include "stdafx.h"
#include "constants.h"

export module Statistics;

export template<typename T>
T Sum(T arr[], const int n);
export template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

export template<typename T>
double Avg(T arr[], const int n);
export template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

export template<typename T>
T MinValueIn(T arr[], const int n);
export template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

export template<typename T>
T MaxValueIn(T arr[], const int n);
export template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);