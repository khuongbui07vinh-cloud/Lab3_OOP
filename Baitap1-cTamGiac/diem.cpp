#include "diem.h"
#include <iostream>
#include <cmath> 

using namespace std;

cDiem::cDiem(double _x, double _y) : x(_x), y(_y) {}

void cDiem::Nhap() {
     cin >> x;
    cin >> y;
}

void cDiem::Xuat() const {
    cout << "(" << x << "," << y << ")";
}

double cDiem::KhoangCach(const cDiem& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

void cDiem::TinhTien(double dx, double dy) {
    x += dx;
    y += dy;
}
void cDiem::Quay(double gocRad) {
    double tempX = x;

    x = tempX * cos(gocRad) - y * sin(gocRad);
    y = tempX * sin(gocRad) + y * cos(gocRad);
}


void cDiem::PhongToThuNho(double k) {

    x *= k;
    y *= k;
}