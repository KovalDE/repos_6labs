#include <iostream>
#include <iomanip>
#include<Windows.h>
#include <math.h>

using namespace std;
void Create(double p[], int n, int i)
{
    cout << "Введіть " << i << " елемент: ";
    cin >> p[i];
    if (i < n - 1) Create(p, n, i + 1);
    else cout << endl;
}
void Mas(double p[], int n, int i)
{
    cout << p[i] << ' ';
    if (i < n - 1) Mas(p, n, i + 1);
    else cout << endl;
}
void SumPlus(double mas[], int n, int i, double s)
{

    if (mas[i] > 0) s += mas[i];
    if (i < n - 1) SumPlus(mas, n, i + 1, s * 1.);
    else cout << s*1.;
}
int Maxi(double mas[], int n,int i,int maxi,double max)
{
        if (abs(max) < abs(mas[i]))
        {
            maxi = i;
            max = mas[i];
        }
        
        if (i < n - 1)Maxi(mas,n,i+1,maxi,max);
    else
    {
        if (maxi == -1) return 0;
        else return maxi;
    }
}
int Mini(double mas[], int n, int i, int mini, double min)
{
    if (abs(min) > abs(mas[i]))
    {
        mini = i;
        min = mas[i];
    }

    if (i < n - 1) Mini(mas, n, i + 1, mini, min);
    else
    {
        if (mini == -1) return 0;
        else return mini;
    }
}
void Dob(double p[], int n, int i, double d)
{
    d *= p[i];
    if (i < n - 1)Dob(p, n, i + 1, d);
    else cout << d<<' ';
}
void Max(double* a, const int size, double& max, int& imax, int j)
{
    if (max < a[j])
    {
        max = a[j];
        imax = j;
    }
    if (j < size - 1)
        Max(a, size, max, imax, j + 1);
}
void Sort(double* a, const int size, int i)
{
    double max = a[i];
    int imax = i;
    Max(a, size, max, imax, i + 1);
    a[imax] = a[i];
    a[i] = max;

    if (i < size - 2)
        Sort(a, size, i + 1);
}

int main()
{
    SetConsoleOutputCP(1251);
    int n;
    cout << "Kількість елементів: ";
    cin >> n;
    double* p = new double[n];
    Create(p, n, 0);
    cout << "Масив: ";
    Mas(p, n, 0);
    cout << "Сума додатніх елементів: ";
    SumPlus(p, n, 0, 0);
    cout << endl;
    int a = Maxi(p, n, 0, -1, p[0]);
    int b = Mini(p, n, 0, -1, p[0]);
    cout << "Добуток елементів, які знаходяться між максимальним і мінімальним по модулю елементами: ";
    if (b < a)
    {
        Dob(p, a, b+1, 1);
    }
    else
        Dob(p,b, a+1, 1);
    Sort(p,n,0);
    cout << endl;
    cout << "Впорядкований масив за спаданням: ";
    Mas(p, n, 0);
    delete [] p;
}

