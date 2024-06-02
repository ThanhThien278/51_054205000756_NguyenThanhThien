#pragma once
#ifndef PHONGLYTHUYET_H
#define PHONGLYTHUYET_H

#include "Phong.h"

class PhongLyThuyet : public Phong {
private:
    bool coMayChieu;

public:
    PhongLyThuyet(string maPhong, string dayNha, double dienTich, int soBongDen, bool coMayChieu);
    bool duAnhSang() const override;
    void inThongTin() const override;
};

#endif // PHONGLYTHUYET_H