#ifndef CNHANVIENVP_H
#define CNHANVIENVP_H

#include <iostream>
#include <string>
using namespace std;

class cNhanVienVP
{
private:
    string maNV, hoTen;
    int ngaySinh, thangSinh, namSinh;
    double luong;

public:
    // Constructor
    cNhanVienVP();
    cNhanVienVP(string ma, string ten, int ng, int th, int nam, double luong);

    string GetMa();
    string GetHoTen();
    int GetNamSinh();
    double GetLuong();
    string GetNgaySinhStr();

    void SetMa(string ma);
    void SetHoTen(string ten);
    void SetNgaySinh(int ng, int th, int nam);
    void SetLuong(double l);

    void Nhap();
    void Xuat();
};

#endif