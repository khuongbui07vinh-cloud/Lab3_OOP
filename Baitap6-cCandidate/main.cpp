#include <iostream>
#include "cListCandidate.h"
using namespace std;

int main() {
    cListCandidate dsts;
    int n;

    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    dsts.Nhap(n);

    cout << "\n DANH SACH THI SINH \n";
    dsts.Xuat();

    cout << "\n THI SINH CO TONG DIEM > 15 \n";
    dsts.XuatDiemTren15();

    cout << "\n THI SINH DIEM CAO NHAT\n";
    dsts.InCaoNhat();

    cout << "\n DANH SACH SAU KHI SAP XEP GIAM DAN\n";
    dsts.SapXepGiamDan();
    dsts.Xuat();

    return 0;
}