#pragma once
#ifndef PHONGMAYTINH_H
#define PHONGMAYTINH_H

#include "Phong.h"

class PhongMayTinh : public Phong {
private:
    int soMayTinh;

public:
    PhongMayTinh(string maPhong, string dayNha, double dienTich, int soBongDen, int soMayTinh);
    bool datChuan() const override;
    void inThongTin() const override;
    void capNhatSoMayTinh(int soMayTinh);
    int getSoMayTinh() const;
};

#endif // PHONGMAYTINH_H