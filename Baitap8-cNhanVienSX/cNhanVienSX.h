#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H

#include <iostream>
#include <string>
using namespace std;

class cNhanVienSX {
private:
    string maNV;
    string hoTen;
    int    ngaySinh, thangSinh, namSinh;
    int    soSP;    // So san pham da gia cong
    double donGia;  // Don gia mot san pham

public:
    cNhanVienSX();
    cNhanVienSX(string ma, string ten,
                int ng, int th, int nam,
                int so, double gia);

    string GetMa();
    string GetHoTen();
    int    GetNamSinh();
    double GetLuong();     // soSP * donGia
    string GetNgaySinhStr();

    void SetMa(string ma);
    void SetHoTen(string ten);
    void SetNgaySinh(int ng, int th, int nam);
    void SetSoSP(int so);
    void SetDonGia(double gia);

    void Nhap();
    void Xuat();
};

#endif