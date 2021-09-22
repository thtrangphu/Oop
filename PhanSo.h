#pragma once
#include <iostream>
using namespace std;

/*
            PHÂN SỐ
*/
class PhanSo {
private:
    int tu, mau; //Tử số, mẫu số 
public:
    //Nhập phân số 
    void nhap();
    //Xuất phân số 
    void xuat();
    //Lấy tử số 
    int layTuSo();
    //Lấy mẫu số 
    int layMauSo();
    //Gán tử số
    void ganTuSo(int tuSo);
    //Gán mẫu số 
    void ganMauSo(int mauSo);
    //Phân Số nghịch đảo
    PhanSo nghichDao();
    //Rút gọn phân số 
    void rutGon();
    //Cộng 2 phân số 
    PhanSo cong(PhanSo p);
    //Nhân 2 phân số 
    PhanSo nhan(PhanSo p);
    //Giá trị phân số 
    double giaTri();
    //So sánh 2 phân số 
    int soSanh(PhanSo p);
};

// Tìm ước chung lớn nhất của 2 số 
int timUocChungLonNhat(int a, int b);
