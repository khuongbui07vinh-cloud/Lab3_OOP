#include "cDaGiac.h"

int main() {
    cDaGiac dg;
    double dx, dy, k, goc;

    dg.Nhap();
    dg.Xuat();
    cout << "Chu vi: " << dg.TinhChuVi() << " | Dien tich: " << dg.TinhDienTich() << endl;

   
    cout << "Do doi Tinh tien (dx dy): "; cin >> dx >> dy;
    dg.TinhTien(dx, dy);

    cout << "He so Phong to thu nho: "; cin >> k;
    dg.PhongTo(k);

    cout << "Goc quay :"; cin >> goc;
    dg.Quay(goc);

    cout << "\n Ket qua" << endl;
    dg.Xuat();
    cout << "Chu vi: " << dg.TinhChuVi() << " | Dien tich: " << dg.TinhDienTich() << endl;

    return 0;
}