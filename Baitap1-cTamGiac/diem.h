#pragma once

class cDiem {
public:
    double x, y;

    cDiem(double _x = 0, double _y = 0);
    void Nhap();
    void Xuat() const;
    double KhoangCach(const cDiem& other) const;
    void TinhTien(double dx, double dy);
    void Quay(double gocRad);
    void PhongToThuNho(double k);
};