#include "cDaGiac.h"

#define PI 3.14

cDaGiac::cDaGiac() : n(0) {}

void cDaGiac::SapXepDinh() {
    if (n < 3) return;
    double tx = 0, ty = 0;
    for (auto& d : dsDiem) { tx += d.x; ty += d.y; }
    tx /= n; ty /= n;
    sort(dsDiem.begin(), dsDiem.end(), [tx, ty](const Diem& a, const Diem& b) {
        return atan2(a.y - ty, a.x - tx) < atan2(b.y - ty, b.x - tx);
    });
}

void cDaGiac::Nhap() {
    do { cout << "Nhap so dinh (n >= 3): "; cin >> n; } while (n < 3);
    dsDiem.resize(n);
    for (int i = 0; i < n; i++) {
        cout << " Dinh " << i + 1 << " (x y): "; cin >> dsDiem[i].x >> dsDiem[i].y;
    }
    SapXepDinh();
}

void cDaGiac::Xuat() {
    for (int i = 0; i < n; i++) cout << "(" << dsDiem[i].x << "," << dsDiem[i].y << ") ";
    cout << endl;
}

double cDaGiac::TinhChuVi() {
    double cv = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        cv += sqrt(pow(dsDiem[j].x - dsDiem[i].x, 2) + pow(dsDiem[j].y - dsDiem[i].y, 2));
    }
    return cv;
}

double cDaGiac::TinhDienTich() {
    double dt = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        dt += (dsDiem[i].x * dsDiem[j].y) - (dsDiem[j].x * dsDiem[i].y);
    }
    return abs(dt) / 2.0;
}

void cDaGiac::TinhTien(double dx, double dy) {
    for (auto& d : dsDiem) { d.x += dx; d.y += dy; }
}

void cDaGiac::PhongTo(double k) {
    for (auto& d : dsDiem) { d.x *= k; d.y *= k; }
}

void cDaGiac::Quay(double do_goc) {
    double rad = do_goc * PI / 180.0;
    for (auto& d : dsDiem) {
        double x_old = d.x, y_old = d.y;
        d.x = x_old * cos(rad) - y_old * sin(rad);
        d.y = x_old * sin(rad) + y_old * cos(rad);
    }
}