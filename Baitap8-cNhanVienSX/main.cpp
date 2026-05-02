#include "cDSNhanVienSX.h"
using namespace std;

int main() {
    cDSNhanVienSX ds;
    int n;

    cout << "Nhap so nhan vien: "; cin >> n; cin.ignore();
    ds.Nhap(n);

    cout << "DANH SACH NHAN VIEN SAN XUAT ";
    ds.Xuat();

    cout << "Nhan vien luong thap nhat:";
    ds.TimLuongThapNhat().Xuat();

    cout << "Tong luong: " << ds.TinhTongLuong() << " VND";

    cout << "Nhan vien tuoi cao nhat:";
    ds.TimTuoiCaoNhat().Xuat();

    ds.SapXepTangDan();
    cout << "SAP XEP TANG DAN THEO LUONG";
    ds.Xuat();

    return 0;
}