#include<iostream>

using namespace std;
//-----------------------------------------------
void FillRand(int arr[], const int n);
void Sort(int arry[], const int n);
int Sum(int arry[], const int n);
double Avg(int arry[], const int n);
int MinValueIn(int arry[], const int n);
int MaxValueIn(int arry[], const int n);
void ShiftLeft(int arry[], const int n, int t);
void ShiftRight(int arry[], const int n, int t);
//-----------------------------------------------
void main()
{
	setlocale(LC_ALL, "");
	const int n = 13;
	int arry[n], t = 5;
	 FillRand(arry, n);
	 Sort(arry, n);
	 cout << "ARRY {";
	 for (int i = 0; i < n; i++) cout << arry[i] << ", "; cout << "}";
	 cout << endl;
	cout <<"Min :" << MinValueIn(arry, n);
	cout << endl;
	cout <<"Max :" << MaxValueIn(arry, n);
	ShiftLeft(arry, n, t);
	cout << endl;
	cout << "ShiftLeft {";
	for (int i = 0; i < n; i++) cout << arry[i] << ", "; cout << "}";
	cout << endl;
	Sort(arry, n);
	cout << "ARRY {";
	for (int i = 0; i < n; i++) cout << arry[i] << ", "; cout << "}";
	ShiftRight(arry, n, t);
	cout << endl;
	cout << "ShiftRight {";
	for (int i = 0; i < n; i++) cout << arry[i] << ", "; cout << "}";
	cout << endl;
	cout << "Сумма элементов масива :" << Sum(arry, n);
	cout << endl;
	cout << "Среднее арифметическое :" << Avg(arry, n);
	cout << endl;
}
void FillRand(int arry[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		arry[i] = rand() % 100;
	}
}
void Sort(int arry[], int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arry[j] > arry[j + 1])
			{
				int buffer = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = buffer;
			}
		}
	}
}
int Sum(int arry[], const int n)
{
		int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arry[i];
	}
	return summ;
}
double Avg(int arry[], const int n)
{
	return (double)Sum(arry,n) / n;
}
int MinValueIn(int arry[], const int n)
{
	int min = arry[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arry[i]) min = arry[i];
	}
	return min;
}
int MaxValueIn(int arry[], const int n)
{
	int max = arry[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arry[i]) max = arry[i];
	}
	return max;
}
void ShiftLeft(int arry[], const int n, int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			int buffer = arry[j+1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}
void ShiftRight(int arry[], const int n, int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = n - 2; j >=0; j--)
		{
			int buffer = arry[j + 1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}