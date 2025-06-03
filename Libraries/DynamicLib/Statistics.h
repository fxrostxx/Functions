#pragma once
#include "constants.h"

template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MinValueIn(T arr[], const int n);
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(T arr[], const int n);
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);