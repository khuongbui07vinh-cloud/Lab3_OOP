#include "phanso.h"
#include <iostream>
#include <cmath>
using namespace std;

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void PhanSo::Nhap() {
    cin >> iTu;
    do {
     cin >> iMau;
    } while (iMau == 0);
}

void PhanSo::Xuat() {
    if (iTu == 0) cout << "0";
    else if (iMau == 1) cout << iTu;
    else cout << iTu << "/" << iMau;
}

void PhanSo::RutGon() {
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;
    if (iMau < 0) { iTu = -iTu; iMau = -iMau; }
}

float PhanSo::GiaTri() {
    return (float)iTu / iMau;
}

PhanSo PhanSo::Tong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

int PhanSo::SoSanh(PhanSo ps) {
    float v1 = this->GiaTri();
    float v2 = ps.GiaTri();
    if (v1 > v2) return 1;
    if (v1 < v2) return -1;
    return 0;
}

int PhanSo::GetTu() { return iTu; }