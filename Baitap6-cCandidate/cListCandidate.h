#ifndef CLISTCANDIDATE_H
#define CLISTCANDIDATE_H

#include "cCandidate.h"
#include <vector>

class cListCandidate {
private:
    vector<cCandidate> ds;

public:
    void Nhap(int n);
    void Xuat();
    void XuatDiemTren15();
    void InCaoNhat(); 
    void SapXepGiamDan();
};

#endif