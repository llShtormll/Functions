#include<iostream>
#include"stdafx.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 11;
	const int t = 3;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� ������ :" << Sum(arr, n) << endl;;
	cout << "�������-�������������� ��������� ������ :" << Avg(arr, n) << endl;;
	cout << "Min :" << MinValueIn(arr, n) << endl;
	cout << "Max :" << MaxValueIn(arr, n) << endl;
	ShiftLeft(arr, n, t);
	Print(arr, n);
	ShiftRight(arr, n, t);
	Print(arr, n);
	cout << endl;
	cout << endl;
	const int SIZE = 10;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� ������ :" << Sum(brr, SIZE) << endl;;
	cout << "�������-��������������  ��������� ������ :" << Avg(brr, SIZE) << endl;;
	cout << endl;
	cout << "Min :" << MinValueIn(brr, SIZE) << endl;
	cout << "Max :" << MaxValueIn(brr, SIZE) << endl;
	ShiftLeft(brr, SIZE, 10);
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, 10);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	cout << endl;
	Print(brr, SIZE);
	cout << endl;
	cout << "              ��������� �����" << endl;

	cout << delimiter << endl;
	const int Shift = 1;
	int Arr[ROWS][COLS]{};
	FillRand(Arr, ROWS, COLS); Print(Arr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Arr, ROWS, COLS); Print(Arr, ROWS, COLS);
	cout << "\n����� ��������� ������ :" << Sum(Arr, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� ������ :" << (double)Avg(Arr, ROWS, COLS) << endl;
	cout << "����������� �������� ������ :" << MinValueIn(Arr, ROWS, COLS) << endl;
	cout << "������������ �������� ������ :" << MaxValueIn(Arr, ROWS, COLS) << endl;
	ShiftLeft(Arr, ROWS, COLS, Shift); Print(Arr, ROWS, COLS); Sort(Arr, ROWS, COLS);
	ShiftRight(Arr, ROWS, COLS, Shift); Print(Arr, ROWS, COLS);

	cout << delimiter << endl;
	double Drr[ROWS][COLS];
	FillRand(Drr, ROWS, COLS); Print(Drr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Drr, ROWS, COLS); Print(Drr, ROWS, COLS);
	cout << "\n����� ��������� ������ :" << Sum(Drr, ROWS, COLS) << endl;
	cout << "������� �������������� ��������� ������ :" << Avg(Drr, ROWS, COLS) << endl;
	cout << "����������� �������� ������ :" << MinValueIn(Drr, ROWS, COLS) << endl;
	cout << "������������ �������� ������ :" << MaxValueIn(Drr, ROWS, COLS) << endl;
	ShiftLeft(Drr, ROWS, COLS, Shift); Print(Drr, ROWS, COLS); Sort(Drr, ROWS, COLS);
	ShiftRight(Drr, ROWS, COLS, Shift); Print(Drr, ROWS, COLS);
	
}
