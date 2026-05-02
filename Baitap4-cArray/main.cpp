#include <bits/stdc++.h>
#include "cArray.h"
using namespace std;

int main()
{
    cArray arr;

    arr.TaoNgauNhien(10, 1, 50);
    cout << "Mang ban dau: " << endl;
    arr.Xuat();
    cout << endl;

    cout << "So lan xuat hien gia tri 5: " << arr.DemGiaTri(5) << endl;

    cout << "Mang tang dan: " << (arr.LaTangDan() ? "Co" : "Khong") << endl;

    int le = arr.TimPhanLeNhoNhat();
    if (le != -1)
        cout << "Phan le nho nhat: " << le << endl;
    else
        cout << "Khong co phan le" << endl;

    int nt = arr.TimSoNguyenToLonNhat();
    if (nt != -1)
        cout << "So nguyen to lon nhat: " << nt << endl;
    else
        cout << "Khong co so nguyen to" << endl;

    cout << "tang dan: ";
    arr.BubbleSort(true);
    arr.Xuat();
    cout << endl;

    cout << "giam dan: ";
    arr.SelectionSort(false);
    arr.Xuat();
    cout << endl;

    return 0;
}