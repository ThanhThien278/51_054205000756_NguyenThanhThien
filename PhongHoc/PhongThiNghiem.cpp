#include "PhongThiNghiem.h"

PhongThiNghiem::PhongThiNghiem(string maPhong, string dayNha, double dienTich, int soBongDen, string chuyenNganh, int sucChua, bool coBonRua)
    : Phong(maPhong, dayNha, dienTich, soBongDen), chuyenNganh(chuyenNganh), sucChua(sucChua), coBonRua(coBonRua) {}

bool PhongThiNghiem::duAnhSang() const {
    return Phong::duAnhSang() && coBonRua;
}

void PhongThiNghiem::inThongTin() const {
    Phong::inThongTin();
    cout << "Chuyen nganh: " << chuyenNganh << ", Suc chua: " << sucChua << ", Co bon rua: " << (coBonRua ? "Co" : "Khong") << endl;
}