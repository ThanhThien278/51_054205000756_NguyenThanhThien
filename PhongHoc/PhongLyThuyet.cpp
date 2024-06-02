#include "PhongLyThuyet.h"

PhongLyThuyet::PhongLyThuyet(string maPhong, string dayNha, double dienTich, int soBongDen, bool coMayChieu)
    : Phong(maPhong, dayNha, dienTich, soBongDen), coMayChieu(coMayChieu) {}

bool PhongLyThuyet::duAnhSang() const {
    return Phong::duAnhSang() && coMayChieu;
}

void PhongLyThuyet::inThongTin() const {
    Phong::inThongTin();
    cout << "Co may chieu: " << (coMayChieu ? "Co" : "Khong") << endl;
}