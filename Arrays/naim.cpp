#include<iostream>

using namespace std;
#define delimiter "\n---------------------------------------\n"
const int ROWS = 4;
const int COLS = 5;
void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int i_arr_2[ROWS][COLS], const int ROWS, const int COLS);


void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWN, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arry[], const int n);
double Avg(double arry[], const int n);

int MinValueIn(int arry[], const int n);
double MinValueIn(double arry[], const int n);

int MaxValueIn(int arry[], const int n);
double MaxValueIn(double arry[], const int n);

void ShiftLeft(int arry[], const int n, int t);
void ShiftLeft(double arry[], const int n, int t);

void ShiftRight(int arry[], const int n, int t);
void ShiftRight(double arry[], const int n, int t);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 11;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов масива :" << Sum(arr, n) << endl;;
	cout << "Среднее-арифметическое элементов масива :" << Avg(arr, n) << endl;;
	cout << "Min :" << MinValueIn(arr, n) << endl;
	cout << "Max :" << MaxValueIn(arr, n) << endl;
	ShiftLeft(arr, n, 10);
	Print(arr, n);
	ShiftRight(arr, n, 10);
	Print(arr, n);
	cout << endl;
	cout << endl;
	const int SIZE = 10;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов масива :" << Sum(brr, SIZE) << endl;;
	cout << "Среднее-арифметическое  элементов масива :" << Avg(brr, SIZE) << endl;;
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
	cout << "              Двумерный масив" << endl;

	cout << delimiter << endl;
	


	
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);


	
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int i_arr_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			i_arr_2[i][j] = rand();
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}
void Print(int i_arr_2[ROWS][COLS], const int ROWN, const int COLS)
{
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << i_arr_2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}

		}

	}
} 
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}

		}

	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arry[], const int n)
{
	return (double)Sum(arry, n) / n;
}
double Avg(double arry[], const int n)
{
	return (double)Sum(arry, n) / n;
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
double MinValueIn(double arry[], const int n)
{

	double min = arry[0];
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
double MaxValueIn(double arry[], const int n)
{
	double max = arry[0];
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
			int buffer = arry[j + 1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}
void ShiftLeft(double arry[], const int n, int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			double buffer = arry[j + 1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}

void ShiftRight(int arry[], const int n, int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = n - 2; j >= 0; j--)
		{
			int buffer = arry[j + 1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}
void ShiftRight(double arry[], const int n, int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = n - 2; j >= 0; j--)
		{
			double buffer = arry[j + 1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}
