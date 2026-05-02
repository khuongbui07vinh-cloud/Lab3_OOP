#include <iostream>
#include "cDSNhanVien.h"
using namespace std;

int main() {
    cDSNhanVien ds;
    int n;
    cin >> n;
    ds.Nhap(n);

    
    ds.Xuat();                         
    ds.TimLuongCaoNhat();               
    cout << ds.TinhTongLuong() << "\n"; 
    ds.TimTuoiCaoNhat();                
    ds.SapXepTangDan();                 
    ds.Xuat();                           

    return 0;
}