#include<iostream>
using namespace std;
const int ROWS = 3, COLS = 4;
int t = 5;

#define delimiter "\n---------------------------------------\n"


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[ROWS][COLS], const int ROWN, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWN, const int COLS);

void Sort(int arr[ROWS][COLS],const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS],const int ROWS, const int COLS);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double rry[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double rry[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int t);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int t);

void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int t);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int t);

void main()
{
	setlocale(LC_ALL, "");

	int Arr[ROWS][COLS]{};
	FillRand(Arr, ROWS, COLS);
	Print(Arr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Arr, ROWS, COLS);
	Print(Arr, ROWS, COLS);
	cout << "\nСумма элементов масива :" << Sum(Arr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов масива :" << Avg(Arr, ROWS, COLS) << endl;
	cout << "Минимальное значение масива :" << MinValueIn(Arr, ROWS, COLS) << endl;
	cout << "Максимальное значение масива :" << MaxValueIn(Arr, ROWS, COLS) << endl;
	ShiftLeft(Arr, ROWS, COLS, t);
	Print(Arr, ROWS, COLS);
	Sort(Arr, ROWS, COLS);
	ShiftRight(Arr, ROWS, COLS, t);
	Print(Arr, ROWS, COLS);
		
	cout << delimiter << endl;
	double Drr[ROWS][COLS];
	FillRand(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << delimiter << endl;
	Sort(Drr, ROWS, COLS);
	Print(Drr, ROWS, COLS);
	cout << "\nСумма элементов масива :" << Sum(Drr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов масива :" << Avg(Drr, ROWS, COLS) << endl;
	cout << "Минимальное значение масива :" << MinValueIn(Drr, ROWS, COLS) << endl;
	cout << "Максимальное значение масива :" << MaxValueIn(Drr, ROWS, COLS) << endl;
	ShiftLeft(Drr, ROWS, COLS, t);
	Print(Drr, ROWS, COLS);
	Sort(Drr, ROWS, COLS);
	ShiftRight(Drr, ROWS, COLS, t);
	Print(Drr, ROWS, COLS);
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
int Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int t)
{
	cout << "\n---------------------Сдвиг влево--------------------" << endl;
	for (int f = 0; f < t; f++)
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
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int t)
{
	cout << "\n---------------------Сдвиг влево--------------------" << endl;
	for (int f = 0; f < t; f++)
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

void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int t)
{
	cout << "\n---------------------Сдвиг вправо--------------------" << endl;
	for (int f = 0; f < (ROWS*COLS) - t; f++)
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
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int t)
{
	cout << "\n---------------------Сдвиг вправо--------------------" << endl;
	for (int f = 0; f < (ROWS * COLS) - t; f++)
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