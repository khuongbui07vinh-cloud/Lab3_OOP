#include "dsphanso.h"
#include <iostream>
using namespace std;

int main() {
    cDSPhanSo ds;
    ds.Nhap();

    cout << "\nDanh sach vua nhap: ";
    ds.Xuat();

    cout << "\nPhan so lon nhat: ";
    ds.TimMax().Xuat();

    cout << "\nDanh sach sau khi sap xep tang: ";
    ds.SapXepTang();
    ds.Xuat();

    return 0;
}