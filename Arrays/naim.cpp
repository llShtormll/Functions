#include<iostream>

using namespace std;
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

	int Arr[ROWS][COLS]{};
	FillRand(Arr, ROWS, COLS); Print(Arr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Arr, ROWS, COLS); Print(Arr, ROWS, COLS);
	cout << "\nСумма элементов масива :" << Sum(Arr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов масива :" << (double)Avg(Arr, ROWS, COLS) << endl;
	cout << "Минимальное значение масива :" << MinValueIn(Arr, ROWS, COLS) << endl;
	cout << "Максимальное значение масива :" << MaxValueIn(Arr, ROWS, COLS) << endl;
	ShiftLeft(Arr, ROWS, COLS, Shift); Print(Arr, ROWS, COLS); Sort(Arr, ROWS, COLS);
	ShiftRight(Arr, ROWS, COLS, Shift); Print(Arr, ROWS, COLS);

	cout << delimiter << endl;
	double Drr[ROWS][COLS];
	FillRand(Drr, ROWS, COLS); Print(Drr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Drr, ROWS, COLS); Print(Drr, ROWS, COLS);
	cout << "\nСумма элементов масива :" << Sum(Drr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов масива :" << Avg(Drr, ROWS, COLS) << endl;
	cout << "Минимальное значение масива :" << MinValueIn(Drr, ROWS, COLS) << endl;
	cout << "Максимальное значение масива :" << MaxValueIn(Drr, ROWS, COLS) << endl;
	ShiftLeft(Drr, ROWS, COLS, Shift); Print(Drr, ROWS, COLS); Sort(Drr, ROWS, COLS);
	ShiftRight(Drr, ROWS, COLS, Shift); Print(Drr, ROWS, COLS);

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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() / 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
			arr[i][j] /= 100;
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
void Print(int arr[ROWS][COLS], const int ROWN, const int COLS)
{

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWN, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int f = 0; f < ROWS; f++)
			{
				for (int k = 0; k < COLS; k++)
				{
					if (arr[f][k] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[f][k];
						arr[f][k] = buffer;
					}
				}
			}
		}
	}

}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int f = 0; f < ROWS; f++)
			{
				for (int k = 0; k < COLS; k++)
				{
					if (arr[f][k] > arr[i][j])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[f][k];
						arr[f][k] = buffer;
					}
				}
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
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
int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
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
int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int  max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
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
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int Shift)
{
	cout << "\n---------------------Сдвиг влево--------------------" << endl;
	for (int f = 0; f < Shift; f++)
	{
		int buf = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1 && i < ROWS - 1)arr[i][j] = arr[i + 1][0];
				else arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buf;
	}
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int Shift)
{
	cout << "\n---------------------Сдвиг влево--------------------" << endl;
	for (int f = 0; f < Shift; f++)
	{
		double buf = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == COLS - 1 && i < ROWS - 1)arr[i][j] = arr[i + 1][0];
				else arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buf;
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
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int Shift)
{
	cout << "\n---------------------Сдвиг вправо--------------------" << endl;
	for (int f = 0; f < Shift; f++)
	{
		int buf = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0 && i > 0)arr[i][j] = arr[i - 1][COLS - 1];
				else arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buf;

	}
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int Shoft)
{
	cout << "\n---------------------Сдвиг вправо--------------------" << endl;
	for (int f = 0; f < Shoft; f++)
	{
		double buf = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0 && i > 0)arr[i][j] = arr[i - 1][COLS - 1];
				else arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buf;

	}
}
