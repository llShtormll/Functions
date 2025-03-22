#include<iostream>

using namespace std;

int Summa(int a = 0, int b = 0, int c = 0);
int Differenc(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
	int a = 2;
	int b = 3;
	int c = Summa(a, b, 11);
	cout << a << " + " << b << " = " << c << "\n";
	cout << a << " - " << b << " = " << Differenc(a, b)<<"\n";
	cout << a << " * " << b << " = " << Product(a, b)<<"\n";
	cout << a << " / " << b << " = " << Quotient(a, b) << "\n";
	cout << 4 << " + " << 5 << " = " << Summa(4, 5) << "\n";
}
 int Summa(int a, int b, int c)
{
	int res = a + b + c;
	return res;
}
int Differenc(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(int a, int b)
{
	return (double)a / b;
}