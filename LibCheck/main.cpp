#include<iostream>
//#include<stdafx_1.h>
#include<stdafx_2.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
}