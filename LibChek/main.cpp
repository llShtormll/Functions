#include<iostream>
#include<stdafx.h>

using namespace std;

void main()
{

	setlocale(LC_ALL, "");
	const int n = 5;
	double arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << delimiter << endl;
	double arra[ROWS][COLS];
	FillRand(arra, ROWS, COLS);
	Print(arra, ROWS, COLS);
}