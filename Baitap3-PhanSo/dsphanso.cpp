#include "dsphanso.h"
#include <iostream>
using namespace std;

void cDSPhanSo::Nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Phan so thu " << i + 1 << ":" << endl;
        ds[i].Nhap();
        ds[i].RutGon();
    }
}

void cDSPhanSo::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        ds[i].Xuat();
        cout << "  ";
    }
    cout << endl;
}

PhanSo cDSPhanSo::TinhTong()
{
    PhanSo tong;
  
    tong.Nhap(); 
    for (int i = 0; i < n; i++)
    {
        tong = tong.Tong(ds[i]);
    }
    return tong;
}

PhanSo cDSPhanSo::TimMax()
{
    PhanSo max = ds[0];
    for (int i = 1; i < n; i++)
    {
        if (ds[i].SoSanh(max) == 1)
            max = ds[i];
    }
    return max;
}

PhanSo cDSPhanSo::TimMin()
{
    PhanSo min = ds[0];
    for (int i = 1; i < n; i++)
    {
        if (ds[i].SoSanh(min) == -1)
            min = ds[i];
    }
    return min;
}

void cDSPhanSo::SapXepTang()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].SoSanh(ds[j]) == 1)
            {
                PhanSo temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void cDSPhanSo::SapXepGiam()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].SoSanh(ds[j]) == -1)
            {
                PhanSo temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}