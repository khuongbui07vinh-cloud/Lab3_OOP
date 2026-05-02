#include "cDaThuc.h"
#include <iostream>
#include <cmath>

using namespace std;

cDaThuc::cDaThuc() : n(0)
{
    a = new double[1]{0};
}

cDaThuc::cDaThuc(int bac) : n(bac)
{
    a = new double[n + 1](); 
}

cDaThuc::cDaThuc(const cDaThuc &dt) : n(dt.n)
{
    a = new double[n + 1];
    for (int i = 0; i <= n; i++)
        a[i] = dt.a[i];
}

cDaThuc::~cDaThuc()
{
    delete[] a;
}

cDaThuc &cDaThuc::operator=(const cDaThuc &dt)
{
    if (this == &dt)
        return *this;
    delete[] a;
    n = dt.n;
    a = new double[n + 1];
    for (int i = 0; i <= n; i++)
        a[i] = dt.a[i];
    return *this;
}

void cDaThuc::Nhap()
{
    cin >> n;
    delete[] a;
    a = new double[n + 1];
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
}

void cDaThuc::Xuat()
{
    cout << "P(x) = ";
    bool dau = false;
    for (int i = 0; i <= n; i++)
    {
        int bac = n - i;
        if (a[i] == 0)
            continue;
        
        if (dau && a[i] > 0)
            cout << " + ";
        else if (a[i] < 0)
            cout << " - ";
        
        double coef = abs(a[i]);
        if (coef != 1 || bac == 0)
            cout << coef;
        
        if (bac > 1)
            cout << "x^" << bac;
        else if (bac == 1)
            cout << "x";
        
        dau = true;
    }
    if (!dau)
        cout << "0";
    cout << endl;
}

double cDaThuc::TinhGiaTri(double val)
{
    double kq = 0;
    for (int i = 0; i <= n; i++)
        kq = kq * val + a[i];
    return kq;
}

cDaThuc cDaThuc::operator+(const cDaThuc &dt)
{
    int bacMax = (n > dt.n) ? n : dt.n;
    cDaThuc kq(bacMax);
    for (int i = 0; i <= bacMax; i++)
    {
        int b = bacMax - i;
        double v1 = (b <= n) ? a[n - b] : 0;
        double v2 = (b <= dt.n) ? dt.a[dt.n - b] : 0;
        kq.a[i] = v1 + v2;
    }
    return kq;
}

cDaThuc cDaThuc::operator-(const cDaThuc &dt)
{
    int bacMax = (n > dt.n) ? n : dt.n;
    cDaThuc kq(bacMax);
    for (int i = 0; i <= bacMax; i++)
    {
        int b = bacMax - i;
        double v1 = (b <= n) ? a[n - b] : 0;
        double v2 = (b <= dt.n) ? dt.a[dt.n - b] : 0;
        kq.a[i] = v1 - v2;
    }
    return kq;
}