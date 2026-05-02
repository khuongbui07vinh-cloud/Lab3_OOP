#ifndef CDSNHANVIEN_H
#define CDSNHANVIEN_H

#include "cNhanVienVP.h"
#include <vector>

class cDSNhanVien {
private:
    vector<cNhanVienVP> ds;

public:
    void Nhap(int n);
    void Xuat();
    cNhanVienVP TimLuongCaoNhat();
    double TinhTongLuong();
    cNhanVienVP TimTuoiCaoNhat();
    void SapXepTangDan();
};

#endif