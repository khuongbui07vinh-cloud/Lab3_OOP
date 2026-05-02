#include "cDSNhanVien.h"
#include <iomanip>

static void inTieuDe() {
    cout << left << setw(10) << "Ma NV" << setw(24) << "Ho Ten" 
         << setw(14) << "Ngay Sinh" << setw(14) << "Luong" << endl;
    cout << string(62, '-') << endl;
}

void cDSNhanVien::Nhap(int n) {
    ds.clear();
    for (int i = 0; i < n; i++) {
        cout << "--- Nhan vien " << (i + 1) << " ---" << endl;
        cNhanVienVP nv;
        nv.Nhap();
        ds.push_back(nv);
    }
}

void cDSNhanVien::Xuat() {
    inTieuDe();
    for (auto& nv : ds) nv.Xuat();
}

cNhanVienVP cDSNhanVien::TimLuongCaoNhat() {
    int idx = 0;
    for (int i = 1; i < (int)ds.size(); i++)
        if (ds[i].GetLuong() > ds[idx].GetLuong())
            idx = i;
    return ds[idx];
}

double cDSNhanVien::TinhTongLuong() {
    double tong = 0;
    for (auto& nv : ds) tong += nv.GetLuong();
    return tong;
}

cNhanVienVP cDSNhanVien::TimTuoiCaoNhat() {
  
    int idx = 0;
    for (int i = 1; i < (int)ds.size(); i++)
        if (ds[i].GetNamSinh() < ds[idx].GetNamSinh())
            idx = i;
    return ds[idx];
}

void cDSNhanVien::SapXepTangDan() {

    int sz = ds.size();
    for (int i = 1; i < sz; i++) {
        cNhanVienVP key = ds[i];
        int j = i - 1;
        while (j >= 0 && ds[j].GetLuong() > key.GetLuong()) {
            ds[j + 1] = ds[j];
            j--;
        }
        ds[j + 1] = key;
    }
}