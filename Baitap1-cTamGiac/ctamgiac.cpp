#include "ctamgiac.h"
#include <iostream>
#include <cmath>

using namespace std;


const double PI = 3.141;
const double EPSILON = 1e-5;

bool isEqual(double a, double b) {
    return abs(a - b) < EPSILON;
}

cTamGiac::cTamGiac() {}
cTamGiac::cTamGiac(cDiem _A, cDiem _B, cDiem _C) : A(_A), B(_B), C(_C) {}
cTamGiac::~cTamGiac() {}

void cTamGiac::Nhap() {
    do {
        cout << "Nhap dinh A:\n"; A.Nhap();
        cout << "Nhap dinh B:\n"; B.Nhap();
        cout << "Nhap dinh C:\n"; C.Nhap();
        if (!HopLe()) {
            cout << "=> 3 diem khong tao thanh tam giac. Vui long nhap lai!\n";
        }
    } while (!HopLe());
}

void cTamGiac::Xuat() const {
    cout << "Tam giac tao boi: ";
    A.Xuat(); cout << "; ";
    B.Xuat(); cout << "; ";
    C.Xuat(); cout << "\n";
}

bool cTamGiac::HopLe() const {
    double a = B.KhoangCach(C);
    double b = A.KhoangCach(C);
    double c = A.KhoangCach(B);
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double cTamGiac::TinhChuVi() const {
    return B.KhoangCach(C) + A.KhoangCach(C) + A.KhoangCach(B);
}

double cTamGiac::TinhDienTich() const {
    double a = B.KhoangCach(C);
    double b = A.KhoangCach(C);
    double c = A.KhoangCach(B);
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void cTamGiac::PhanLoai() const {
    double a = B.KhoangCach(C);
    double b = A.KhoangCach(C);
    double c = A.KhoangCach(B);

    bool vuong = isEqual(a*a + b*b, c*c) || isEqual(a*a + c*c, b*b) || isEqual(b*b + c*c, a*a);
    bool can = isEqual(a, b) || isEqual(b, c) || isEqual(a, c);
    bool deu = isEqual(a, b) && isEqual(b, c);

    if (deu) cout << "Tam giac deu";
    else if (vuong && can) cout << "Tam giac vuong can";
    else if (vuong) cout << "Tam giac vuong";
    else if (can) cout << "Tam giac can";
    else cout << "Tam giac thuong";
}

void cTamGiac::TinhTien(double dx, double dy) {
    A.TinhTien(dx, dy);
    B.TinhTien(dx, dy);
    C.TinhTien(dx, dy);
}

void cTamGiac::Quay(double gocDo) {
  
    double gocRad = gocDo * PI / 180.0;
    
    // 2. Gọi hàm quay cho từng đỉnh
    A.Quay(gocRad);
    B.Quay(gocRad);
    C.Quay(gocRad);
}

void cTamGiac::PhongToThuNho(double k) {

    if (k == 0) {
        cout << "Loi: Ti le khong the bang 0.\n";
        return;
    }
 
    A.PhongToThuNho(k);
    B.PhongToThuNho(k);
    C.PhongToThuNho(k);
}