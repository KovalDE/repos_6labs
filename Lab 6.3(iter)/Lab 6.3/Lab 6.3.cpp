#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;

int SumMinus(int mas[], int n)
{
    int s = 0;
    for (int i = 0;i < n;i++)
    {
        if (mas[i]< 0) s += mas[i];
    }
    return s;
}
void SumMinus1(int mas[], int n)
{
    int s = 0;
    for (int i = 0;i < n;i++)
    {
        if (mas[i] < 0) s += mas[i];
    }
    cout << "Сума від'ємних елементів за допомогою void: " << s;
}


int main()
{
    SetConsoleOutputCP(1251);
    int n;
    cout << "Kількість елементів: ";
    cin >> n;
    int* p = new int[n];
    for (int i = 0;i < n;i++)
    {
        cout << "Введіть " << i << " елемент: ";
        cin >> p[i];
    }
    cout << endl;
    cout << "Масив: ";
    for (int i = 0;i < n;i++)
        cout << p[i] << ' ';
    cout << endl;
    cout <<"Сума від'ємних елементів за допомогою функцій: "<< SumMinus(p, n);
    cout << endl;
    SumMinus1(p, n);
    delete[] p;
}
