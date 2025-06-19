module;

#include "stdafx.h"
#include "constants.h"

export module Shift;


export template<typename T>
void ShiftLeft(T arr[], const int n, int shiftStep);
export template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int shiftStep);

export template<typename T>
void ShiftRight(T arr[], const int n, int shiftStep);
export template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int shiftStep);