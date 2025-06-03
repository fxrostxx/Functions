#pragma once
#include "stdafx.h"
#include "constants.h"

void fillArr(int arr[], const int n, int minRand = 0, int maxRand = 100);
void fillArr(double arr[], const int n, int minRand = 0, int maxRand = 100);
void fillArr(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void fillArr(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);