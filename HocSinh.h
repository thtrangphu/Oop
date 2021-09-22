#pragma once
#include <string>
#include <iostream>
using namespace std;
/*
            HỌC SINH 
*/

class HocSinh
{
private:
    string hoTen;
    float toan, van;
public:
    //Nhập học sinh 
    void nhap();
    //Xuất học sinh 
    void xuat();
    //Lấy họ tên
    string layHoTen();
    //Lấy điểm văn
    float layDiemVan();
    // Lấy điểm toán
    float layDiemToan();
    //Gán giá trị ten hoc sinh
    void gan(string hoTen);
    //Gán giá trị điểm toán và điểm văn 
    void gan(float toan, float van);
    //Gán học sinh 
    void gan(string hoten, float toan, float van);
    //Tính điểm trung bình 
    float tinhDTB();
    //Xếp loại 
    void xepLoai();
};


