#ifndef DSPHANSO_H
#define DSPHANSO_H
#include "phanso.h"

class cDSPhanSo {
private:
    int n;
    PhanSo ds[100];
public:
    void Nhap();
    void Xuat();
    PhanSo TinhTong();
    PhanSo TimMax();
    PhanSo TimMin();
    void SapXepTang();
    void SapXepGiam();
};

#endif