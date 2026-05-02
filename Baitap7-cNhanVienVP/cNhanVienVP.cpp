#include "cNhanVienVP.h"
#include <iomanip>
#include <sstream>

cNhanVienVP::cNhanVienVP()
    : maNV(""), hoTen(""),
      ngaySinh(1), thangSinh(1), namSinh(2000),
      luong(0) {}

cNhanVienVP::cNhanVienVP(string ma, string ten, int ng, int th, int nam, double l)
    : maNV(ma), hoTen(ten), ngaySinh(ng), thangSinh(th), namSinh(nam), luong(l) {}

string cNhanVienVP::GetMa()      { return maNV; }
string cNhanVienVP::GetHoTen()   { return hoTen; }
int    cNhanVienVP::GetNamSinh() { return namSinh; }
double cNhanVienVP::GetLuong()   { return luong; }

string cNhanVienVP::GetNgaySinhStr() {
    ostringstream oss;
    oss << setfill('0')
        << setw(2) << ngaySinh << "/"
        << setw(2) << thangSinh << "/"
        << namSinh;
    return oss.str();
}
void cNhanVienVP::SetMa(string ma)   { maNV = ma; }
void cNhanVienVP::SetHoTen(string ten) { hoTen = ten; }
void cNhanVienVP::SetNgaySinh(int ng, int th, int nam) {
    ngaySinh = ng; thangSinh = th; namSinh = nam;
}
void cNhanVienVP::SetLuong(double l) { luong = l; }

void cNhanVienVP::Nhap() {
    cout << "  Ma NV     : "; cin >> maNV;
    cin.ignore();
    cout << "  Ho ten    : "; getline(cin, hoTen);
    cout << "  Ngay sinh (dd mm yyyy): ";
    cin >> ngaySinh >> thangSinh >> namSinh;
    cout << "  Luong     : "; cin >> luong;
}
void cNhanVienVP::Xuat() {
    cout << left
         << setw(10) << maNV
         << setw(24) << hoTen
         << setw(14) << GetNgaySinhStr()
         << setw(14) << fixed << setprecision(0) << luong
         << endl; 
}