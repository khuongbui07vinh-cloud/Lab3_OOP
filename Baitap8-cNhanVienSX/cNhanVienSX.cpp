#include "cNhanVienSX.h"
#include <iomanip>
#include <sstream>

cNhanVienSX::cNhanVienSX()
    : maNV(""), hoTen(""),
      ngaySinh(1), thangSinh(1), namSinh(2000),
      soSP(0), donGia(0) {}

cNhanVienSX::cNhanVienSX(string ma, string ten,
                          int ng, int th, int nam,
                          int so, double gia)
    : maNV(ma), hoTen(ten),
      ngaySinh(ng), thangSinh(th), namSinh(nam),
      soSP(so), donGia(gia) {}

string cNhanVienSX::GetMa()      { return maNV; }
string cNhanVienSX::GetHoTen()   { return hoTen; }
int    cNhanVienSX::GetNamSinh() { return namSinh; }
double cNhanVienSX::GetLuong()   { return soSP * donGia; }

string cNhanVienSX::GetNgaySinhStr() {
    ostringstream oss;
    oss << setfill('0')
        << setw(2) << ngaySinh  << "/"
        << setw(2) << thangSinh << "/"
        << namSinh;
    return oss.str();
}

void cNhanVienSX::SetMa(string ma)   { maNV = ma; }
void cNhanVienSX::SetHoTen(string ten) { hoTen = ten; }
void cNhanVienSX::SetNgaySinh(int ng, int th, int nam) {
    ngaySinh = ng; thangSinh = th; namSinh = nam;
}
void cNhanVienSX::SetSoSP(int so)    { soSP = so; }
void cNhanVienSX::SetDonGia(double g) { donGia = g; }

void cNhanVienSX::Nhap() {
    cout << "  Ma NV          : "; cin >> maNV;
    cin.ignore();
    cout << "  Ho ten         : "; getline(cin, hoTen);
    cout << "  Ngay sinh (dd mm yyyy): ";
    cin >> ngaySinh >> thangSinh >> namSinh;
    cout << "  So SP gia cong : "; cin >> soSP;
    cout << "  Don gia (VND)  : "; cin >> donGia;
}

void cNhanVienSX::Xuat() {
    cout << left << setw(10) << maNV << setw(22) << hoTen << setw(13) << GetNgaySinhStr()  << setw(8)  << soSP << setw(12) << donGia  << fixed << setprecision(0) << GetLuong() << endl;
}