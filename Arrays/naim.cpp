#ifdef DEBUG
#include<iostream>
#include"stdafx_2.h"
using namespace std;
#define delimiter "\n---------------------------------------\n"


void main()
{
	setlocale(LC_ALL, "RU");
	const int n = 11;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов масива :" << Sum(arr, n) << endl;;
	cout << "Среднее арифметическое элементов масива :" << Avg(arr, n) << endl;;
	cout << "Min :" << MinValueIn(arr, n) << endl;
	cout << "Max :" << MaxValueIn(arr, n) << endl;
	ShiftLeft(arr, n, 3);
	Print(arr, n);
	ShiftRight(arr, n, 3);
	Print(arr, n);
	cout << endl;
	cout << endl;
	const int SIZE = 10;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов масива :" << Sum(brr, SIZE) << endl;;
	cout << "Среднее арифметическое элементов масива :" << Avg(brr, SIZE) << endl;;
	cout << endl;
	cout << "Min :" << MinValueIn(brr, SIZE) << endl;
	cout << "Max :" << MaxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << endl;
	ShiftLeft(brr, SIZE, 3);
	Print(brr, SIZE); Sort(brr, SIZE);
	ShiftRight(brr, SIZE, 3);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	cout << endl;
	cout << "              Двумерный масив" << endl;

	cout << delimiter << endl;




	int Arr[ROWS][COLS]{};
	FillRand(Arr, ROWS, COLS); Print(Arr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Arr, ROWS, COLS); Print(Arr, ROWS, COLS);
	cout << "\nСумма элементов масива :" << Sum(Arr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов масива :" << (double)Avg(Arr, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов масива :" << MinValueIn(Arr, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов масива :" << MaxValueIn(Arr, ROWS, COLS) << endl;
	ShiftLeft(Arr, ROWS, COLS, Shift); Print(Arr, ROWS, COLS); Sort(Arr, ROWS, COLS);
	ShiftRight(Arr, ROWS, COLS, Shift); Print(Arr, ROWS, COLS);

	cout << delimiter << endl;
	double Drr[ROWS][COLS];
	FillRand(Drr, ROWS, COLS); Print(Drr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Drr, ROWS, COLS); Print(Drr, ROWS, COLS);
	cout << "\nСумма элементов масива :" << Sum(Drr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов масива  :" << Avg(Drr, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов масива :" << MinValueIn(Drr, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов масива :" << MaxValueIn(Drr, ROWS, COLS) << endl;
	ShiftLeft(Drr, ROWS, COLS, Shift); Print(Drr, ROWS, COLS); Sort(Drr, ROWS, COLS);
	ShiftRight(Drr, ROWS, COLS, Shift); Print(Drr, ROWS, COLS);



}

#endif // DEBUG
