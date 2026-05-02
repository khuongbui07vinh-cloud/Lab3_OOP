#ifndef CDSNHANVIENSX_H
#define CDSNHANVIENSX_H

#include "cNhanVienSX.h"
#include <vector>

class cDSNhanVienSX {
private:
    vector<cNhanVienSX> ds;

public:
    void          Nhap(int n);
    void          Xuat();
    cNhanVienSX  TimLuongThapNhat();
    double        TinhTongLuong();
    cNhanVienSX  TimTuoiCaoNhat();
    void          SapXepTangDan();
};

#endif