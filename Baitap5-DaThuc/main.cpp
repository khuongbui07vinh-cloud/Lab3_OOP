#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main()
{
    int x;
    cout<<"Nhap gia tri x:";
    cin>>x;
    cDaThuc p1, p2;

    cout << "P1 - ";
    p1.Nhap();
    cout << "P1: ";
    p1.Xuat();

    cout << "P1(x) = " << p1.TinhGiaTri(x) << endl;
    cout << "\nP2 - ";
    p2.Nhap();
    cout << "P2: ";
    p2.Xuat();

    cout << "\nP1 + P2: ";
    (p1 + p2).Xuat();

    cout << "P1 - P2: ";
    (p1 - p2).Xuat();

    cout << "(P1+P2)(x) = " << (p1 + p2).TinhGiaTri(x) << endl;

    return 0;
}