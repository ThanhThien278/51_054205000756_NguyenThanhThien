#include "PhongMayTinh.h"

PhongMayTinh::PhongMayTinh(string maPhong, string dayNha, double dienTich, int soBongDen, int soMayTinh)
    : Phong(maPhong, dayNha, dienTich, soBongDen), soMayTinh(soMayTinh) {}

bool PhongMayTinh::datChuan() const {
    return Phong::datChuan() && (dienTich / soMayTinh >= 1.5);
}

void PhongMayTinh::inThongTin() const {
    Phong::inThongTin();
    cout << "So may tinh: " << soMayTinh << endl;
}

void PhongMayTinh::capNhatSoMayTinh(int soMayTinh) {
    this->soMayTinh = soMayTinh;
}

int PhongMayTinh::getSoMayTinh() const {
    return soMayTinh;
}