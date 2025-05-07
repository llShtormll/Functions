#pragma once
#include<iostream>
#include"constants.h"
using namespace std;
template<typename T>void ShiftLeft(T arry[], const int n, int t);
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);

template<typename T>void ShiftRight(T arry[], const int n, int t);
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);

