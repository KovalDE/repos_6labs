#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;

void Create(int p[], int n,int i)
{
       cout << "Введіть " << i << " елемент: ";
       cin >> p[i];
       if (i < n - 1) Create(p, n, i + 1);
    else cout << endl;
}
void Mas(int p[], int n, int i)
{
    cout << p[i] << ' ';
    if (i < n - 1) Mas(p, n, i + 1);
    else cout << endl;
}


int SumMinus(int mas[], int n,int i,int s)
{
   
        if (mas[i] < 0) s += mas[i];
        if (i < n - 1) SumMinus(mas,n,i+1,s);
    else return s;
}
void SumMinus1(int mas[], int n, int i, int s)
{

    if (mas[i] < 0) s += mas[i];
    if (i < n - 1) SumMinus(mas, n, i + 1, s);
    else cout <<"Сума від`ємних елементів за допомогою void : "<< s;;
}

int main()
{
    SetConsoleOutputCP(1251);
    int n;
    cout << "Kількість елементів: ";
    cin >> n;
    int* p = new int[n];
    Create(p, n,0);
    cout << "Масив: ";
    Mas(p, n, 0);
    cout << "Сума від`ємних елементів: ";
    cout << SumMinus(p, n,0,0);
    cout << endl;
    delete[] p;
}
