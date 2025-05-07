#include"Shift_Left_Right.h"
using namespace std;

template<typename T>void ShiftLeft(T arry[], const int n, int t)
{
	cout << "\n---------------------Сдвиг влево--------------------" << endl;
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
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift)
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

template<typename T>void ShiftRight(T arry[], const int n, int t)
{
	cout << "\n---------------------Сдвиг вправо--------------------" << endl;
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
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int Shift)
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

	}
}