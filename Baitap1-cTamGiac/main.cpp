#include "ctamgiac.h"
#include <iostream>

using namespace std;

int main() {
    cTamGiac tg;
    float dx, dy, k, goc;

    tg.Nhap();
    tg.Xuat();

    cout << "\nChu vi: " << tg.TinhChuVi();
    cout << "\nDien tich: " << tg.TinhDienTich();
    cout << "\nPhan loai: "; tg.PhanLoai(); cout << endl;


    cout << "\nNhap vecto tinh tien  "; cin >> dx;
    cin >> dy;

    cout << "--- Tinh tien tam giac (" << dx << ", " << dy << ") ---";
    tg.TinhTien(dx, dy);
    cout << "\n";
    tg.Xuat();

    

  
    cout << "\nNhap goc quay "; cin >> goc;
    tg.Quay(goc);
    cout << " Tam giac sau khi quay " << goc << " do ---";
    cout << "\n";
    tg.Xuat();

    cout << "\nNhap ti le phong to / thu nho  "; cin >> k;
    tg.PhongToThuNho(k);
    cout << "--- Tam giac sau khi phong to/thu nho voi k = " << k << " ---";
    cout << "\n";
    tg.Xuat();

    return 0;
}