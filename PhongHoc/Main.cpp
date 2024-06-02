#include <iostream>
#include "QuanLyPhongHoc.h"

using namespace std;

int main() {
    QuanLyPhongHoc qlph;

    // Tao danh sach phong hoc mau
    qlph.taoDanhSachPhongHocMau();

    // Hien thi menu
    qlph.menu();

    return 0;
}