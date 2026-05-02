#ifndef CDATHUC_H
#define CDATHUC_H

#include <iostream>
using namespace std;

class cDaThuc
{
private:
    double *a;
    int n;

public:
    cDaThuc();
    cDaThuc(int bac);
    cDaThuc(const cDaThuc &dt);
    ~cDaThuc();

    void Nhap();
    void Xuat();

    double TinhGiaTri(double val);

    cDaThuc operator+(const cDaThuc &dt);
    cDaThuc operator-(const cDaThuc &dt);
    cDaThuc &operator=(const cDaThuc &dt);
};

#endif