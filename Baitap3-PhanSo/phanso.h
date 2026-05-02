#ifndef PHANSO_H
#define PHANSO_H

class PhanSo {
private:
    int iTu, iMau;
public:
    void Nhap();
    void Xuat();
    void RutGon();
    float GiaTri();
    PhanSo Tong(PhanSo ps);
    int SoSanh(PhanSo ps);
    int GetTu();
};

#endif