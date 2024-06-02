#pragma once
#ifndef PHONGTHINGHIEM_H
#define PHONGTHINGHIEM_H

#include "Phong.h"

class PhongThiNghiem : public Phong {
private:
    string chuyenNganh;
    int sucChua;
    bool coBonRua;

public:
    PhongThiNghiem(string maPhong, string dayNha, double dienTich, int soBongDen, string chuyenNganh, int sucChua, bool coBonRua);
    bool datChuan() const override;
    void inThongTin() const override;
};

#endif // PHONGTHINGHIEM_H