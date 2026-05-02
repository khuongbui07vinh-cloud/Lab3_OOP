#pragma once
#include "diem.h"

class cTamGiac {
private:
    cDiem A, B, C;

public:
    cTamGiac();
    cTamGiac(cDiem _A, cDiem _B, cDiem _C);
    ~cTamGiac();

    void Nhap();
    void Xuat() const;
    bool HopLe() const;
    void PhanLoai() const;
    double TinhChuVi() const;
    double TinhDienTich() const;
    
    void TinhTien(double dx, double dy);
    void Quay(double gocDo);
    void PhongToThuNho(double k);
};