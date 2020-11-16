#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;

void Print(double* p, int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << p[i];
    cout << endl;
}

double SumPlus(double mas[], int n)
{
    double s = 0;
    for (int i = 0;i < n;i++)
    {
        if (mas[i] > 0) s += mas[i];
    }
    return s;
}

double Maxi(double mas[], int n)
{
    int maxi = -1;
    double max = mas[0];
    for (int i = 0;i < n;i++)
    {
        if (abs(max) < abs(mas[i]))
        {
            maxi = i;
            max = mas[i];
        }
    }
    if (maxi == -1) return 0;
    else return maxi;
}

double Mini(double mas[], int n)
{
    int mini = -1;
    double min = mas[0];
    for (int i = 0;i < n;i++)
    {
        if (abs(min) > abs(mas[i]))
        {
            mini = i;
            min = mas[i];
        }
    }
    if (mini == -1) return 0;
    else return mini;
}

double Dobutok(double mas[], int n)
{
    double dob = 1;
    int imin;
    int imax;
    if ((Mini(mas, n)) < Maxi(mas, n))
    {
        imin = Mini(mas, n) + 1;
        imax = Maxi(mas, n);
    }
    else
    {
        imin = Maxi(mas, n) + 1;
        imax = Mini(mas, n);
    }
    for (int i = imin;i < imax;i++)
    {
        dob *= mas[i];
    }
    return dob;
}

void Sort(double* p, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (p[j] < p[j + 1])
            {
                double tmp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    SetConsoleOutputCP(1251);
    int n;
    cout << "Kількість елементів: ";
    cin >> n;
    double* p = new double[n];
    for (int i = 0;i < n;i++)
    {
        cout << "Введіть " << i << " елемент: ";
        cin >> p[i];
    }
    cout << endl;
    cout << "Масив: ";
    Print(p, n);
    cout << endl;
    cout << "Сума додатніх елементів: " << SumPlus(p, n);
    cout << endl;
    cout << "Добуток елементів, які знаходяться між максимальним і мінімальним за модулем елементами: " << Dobutok(p, n);
    cout << endl;
    cout << "Впорядкований масив за спаданням: ";
    Sort(p, n);
    Print(p, n);
    delete[] p;
}



