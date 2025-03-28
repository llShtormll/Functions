#include<iostream>
using namespace std;
//-----------------------------------------------
void FillRand(int arr[], const int n);
void Sort(int arry[], int n);
int Sum(int arry[], int n);
int Avg(int arry[], int n);
int MinValueIn(int arry[], int n);
int MaxValueIn(int arry[], int n);
void ShiftLeft(int arry[], int n, int t);
void ShiftRight(int arry[], int n, int t);
//-----------------------------------------------
void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
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
int Sum(int arry[], int n)
{
		int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arry[i];
	}
	return summ;
}
int Avg(int arry[], int n)
{
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += arry[i];
	}
	return summ / n;
}
int MinValueIn(int arry[], int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (min > arry[i]) min = arry[i];
	}
	return min;
}
int MaxValueIn(int arry[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < arry[i]) max = arry[i];
	}
	return max;
}
void ShiftLeft(int arry[], int n, int t)
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
void ShiftRight(int arry[], int n, int t)
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