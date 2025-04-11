#pragma once
#include<iostream>

#define delimiter "\n---------------------------------------\n"
const int ROWS = 4;
const int COLS = 5;
const int Shift = 1;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWN, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWN, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arry[], const int n);
double Avg(double arry[], const int n);
int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arry[], const int n);
double MinValueIn(double arry[], const int n);
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double rry[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arry[], const int n);
double MaxValueIn(double arry[], const int n);
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double rry[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arry[], const int n, int t);
void ShiftLeft(double arry[], const int n, int t);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);


void ShiftRight(int arry[], const int n, int t);
void ShiftRight(double arry[], const int n, int t);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);

