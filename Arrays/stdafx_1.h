#pragma once
#include<iostream>

const int ROWS = 4;
const int COLS = 5;
const int Shift = 1;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWN, const int COLS);
template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>double Avg(T arry[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MinValueIn(T arry[], const int n);
template<typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MaxValueIn(T arry[], const int n);
template<typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void ShiftLeft(T arry[], const int n, int t);
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);

template<typename T>void ShiftRight(T arry[], const int n, int t);
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);
