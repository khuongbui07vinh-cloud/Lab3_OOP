#include "cDSNhanVienSX.h"
#include <iomanip>

static void inTieuDe() {
    cout << left
         << setw(10) << "Ma NV"
         << setw(22) << "Ho Ten"
         << setw(13) << "Ngay Sinh"
         << setw(8)  << "So SP"
         << setw(12) << "Don Gia"
         << "Luong";
    cout << string(72, '-') << endl;
}

void cDSNhanVienSX::Nhap(int n) {
    ds.clear();
    for (int i = 0; i < n; i++) {
        cout << "Nhan vien " << (i+1);
        cNhanVienSX nv; nv.Nhap();
        ds.push_back(nv);
    }
}

void cDSNhanVienSX::Xuat() {
    inTieuDe();
    for (auto& nv : ds) nv.Xuat();
}

cNhanVienSX cDSNhanVienSX::TimLuongThapNhat() {
    int idx = 0;
    for (int i = 1; i < (int)ds.size(); i++)
        if (ds[i].GetLuong() < ds[idx].GetLuong()) idx = i;
    return ds[idx];
}

double cDSNhanVienSX::TinhTongLuong() {
    double tong = 0;
    for (auto& nv : ds) tong += nv.GetLuong();
    return tong;
}

cNhanVienSX cDSNhanVienSX::TimTuoiCaoNhat() {
    int idx = 0;
    for (int i = 1; i < (int)ds.size(); i++)
        if (ds[i].GetNamSinh() < ds[idx].GetNamSinh()) idx = i;
    return ds[idx];
}

void cDSNhanVienSX::SapXepTangDan() {
    int sz = ds.size();
    for (int i = 1; i < sz; i++) {
        cNhanVienSX key = ds[i]; int j = i - 1;
        while (j >= 0 && ds[j].GetLuong() > key.GetLuong())
            { ds[j+1] = ds[j]; j--; }
        ds[j+1] = key;
    }
}