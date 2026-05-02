#include "cArray.h"
#include <bits/stdc++.h>

cArray::cArray() : a(nullptr), n(0) {}

cArray::cArray(int size) : n(size)
{
    a = new int[n];
}

cArray::~cArray()
{
    delete[] a;
}


void cArray::TaoNgauNhien(int size, int minVal, int maxVal)
{
    delete[] a;
    n = size;
    a = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++)
        a[i] = minVal + rand() % (maxVal - minVal + 1);
}


void cArray::Xuat()
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << "]";
}


int cArray::DemGiaTri(int x)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            dem++;
    return dem;
}


bool cArray::LaTangDan()
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return false;
    return true;
}


bool cArray::LaNguyenTo(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= (int)sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}


int cArray::TimPhanLeNhoNhat()
{
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            return a[i];
    return -1; 
}


int cArray::TimSoNguyenToLonNhat()
{
    int kq = -1;
    for (int i = 0; i < n; i++)
        if (LaNguyenTo(a[i]) && a[i] > kq)
            kq = a[i];
    return kq;
}


void cArray::BubbleSort(bool tang)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (tang ? a[j] > a[j + 1] : a[j] < a[j + 1])
                swap(a[j], a[j + 1]);
}


void cArray::SelectionSort(bool tang)
{
    for (int i = 0; i < n - 1; i++)
    {
        int idx = i;
        for (int j = i + 1; j < n; j++)
            if (tang ? a[j] < a[idx] : a[j] > a[idx])
                idx = j;
        swap(a[i], a[idx]);
    }
}

