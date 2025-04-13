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

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWN, const int COLS);
template<typename T>
void Sort(T arr[], const int n);
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arry[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MinValueIn(T arry[], const int n);
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(T arry[], const int n);
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void ShiftLeft(T arry[], const int n, int t);
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);

template<typename T>
void ShiftRight(T arry[], const int n, int t);
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift);


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
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}
template<typename T>
void Print(T i_arr_2[ROWS][COLS], const int ROWN, const int COLS)
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
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;


		}

	}
}
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
						T buffer = arr[i][j];
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
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>
double Avg(T arry[], const int n)
{
	return (double)Sum(arry, n) / n;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
template<typename T>
T MinValueIn(T arry[], const int n)
{

	T min = arry[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arry[i]) min = arry[i];
	}
	return min;
}
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}
template<typename T>
T MaxValueIn(T arry[], const int n)
{
	T max = arry[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arry[i]) max = arry[i];
	}
	return max;
}
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T  max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

template<typename T>
void ShiftLeft(T arry[], const int n, int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			T buffer = arry[j + 1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}
template<typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift)
{
	cout << "\n---------------------Сдвиг влево--------------------" << endl;
	for (int f = 0; f < Shift; f++)
	{
		T buf = arr[0][0];
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

template<typename T>
void ShiftRight(T arry[], const int n, int t)
{
	for (int i = 1; i <= t; i++)
	{
		for (int j = n - 2; j >= 0; j--)
		{
			T buffer = arry[j + 1];
			arry[j + 1] = arry[j];
			arry[j] = buffer;
		}
	}
}
template<typename T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift)
{
	cout << "\n---------------------Сдвиг вправо--------------------" << endl;
	for (int f = 0; f < Shift; f++)
	{
		T buf = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				if (j == 0 && i > 0)arr[i][j] = arr[i - 1][COLS - 1];
				else arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buf;


