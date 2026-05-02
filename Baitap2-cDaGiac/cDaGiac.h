#ifndef CDAGIAC_H
#define CDAGIAC_H

#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Diem {
    double x, y;
};

class cDaGiac {
private:
    int n;
    vector<Diem> dsDiem;
    void SapXepDinh();

public:
    cDaGiac();
    void Nhap();
    void Xuat();
    double TinhChuVi();
    double TinhDienTich();
    void TinhTien(double dx, double dy);
    void PhongTo(double ty_le);
    void Quay(double goc_do);
};

#endif