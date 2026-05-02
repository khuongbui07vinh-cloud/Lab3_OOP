#include "cListCandidate.h"

void cListCandidate::Nhap(int n) {
    ds.resize(n); // Cấp phát sẵn n phần tử
    for (int i = 0; i < n; i++) {
        cout << "--- Nhap thi sinh " << i + 1 << " ---\n";
        ds[i].Nhap();
    }
}

void cListCandidate::Xuat() {
    for (auto& ts : ds) ts.Xuat();
}

void cListCandidate::XuatDiemTren15() {
    bool co = false;
    for (auto& ts : ds) {
        if (ts.GetTongDiem() > 15) { 
            ts.Xuat(); 
            co = true; 
        }
    }
    if (!co) cout << "Khong co thi sinh nao > 15 diem.\n";
}

void cListCandidate::InCaoNhat() {
    if (ds.empty()) return;
    int idx = 0;
    for (size_t i = 1; i < ds.size(); i++) {
        if (ds[i].GetTongDiem() > ds[idx].GetTongDiem())
            idx = i;
    }
    ds[idx].Xuat();
}

void cListCandidate::SapXepGiamDan() {
    for (size_t i = 0; i < ds.size() - 1; i++) {
        for (size_t j = i + 1; j < ds.size(); j++) {
            if (ds[j].GetTongDiem() > ds[i].GetTongDiem()) {
                swap(ds[i], ds[j]);
            }
        }
    }
}