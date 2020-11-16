#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;

void Create(int p[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << "Введіть " << i << " елемент: ";
		cin >> p[i];
	}
	cout << endl;
	for (int i = 0;i < n;i++)
		cout << p[i] << ' ';
}

int SumPar(int mas[], int n)
{
	int s = 0;
	for (int i = 0;i < n;i++)
	{
		if ((mas[i] % 2) == 0) s += mas[i];
	}
	return s;
}
int main()
{
	SetConsoleOutputCP(1251);
	int n;
	cout << "Kількість елементів: ";
	cin >> n;
	int* p = new int[n];
	Create(p, n);
	cout << endl;
	cout << SumPar(p, n);
	delete[] p;
}

