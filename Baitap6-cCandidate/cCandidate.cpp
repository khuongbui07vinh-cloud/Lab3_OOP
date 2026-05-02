#include "cCandidate.h"

void cCandidate::Nhap() {
    cout << "Ma TS: "; cin >> ma;
    cin.ignore();
    cout << "Ho ten: "; getline(cin, ten);
    cout << "Ngay sinh: "; getline(cin, ngaySinh);
    cout << "Diem Toan, Van, Anh (cach nhau boi khoang trang): "; 
    cin >> diemToan >> diemVan >> diemAnh;
}

void cCandidate::Xuat() {
    cout << ma << "\t" << ten << "\t" << ngaySinh << "\t"
         << diemToan << "\t" << diemVan << "\t" << diemAnh << "\t" 
         << "Tong: " << GetTongDiem() << endl;
}

double cCandidate::GetTongDiem() {
    return diemToan + diemVan + diemAnh;
}