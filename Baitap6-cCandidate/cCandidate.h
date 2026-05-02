#ifndef CCANDIDATE_H
#define CCANDIDATE_H

#include <iostream>
#include <string>
using namespace std;

class cCandidate {
private:
    string ma, ten, ngaySinh;
    double diemToan, diemVan, diemAnh;

public:
    void Nhap();
    void Xuat();
    double GetTongDiem();
};

#endif