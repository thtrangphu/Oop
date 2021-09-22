#include "HocSinh.h"
void HocSinh::nhap()
{
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap diem toan: ";
    cin >> toan;
    cout << "Nhap diem van: ";
    cin >> van;
}
void HocSinh::xuat() {
    cout << "Ten: " << hoTen << "  -  Toan: " << toan << "-  Van: " << van << endl;
}
//Lấy họ tên
string HocSinh::layHoTen() {
    return hoTen;
}
//Lấy điểm văn
float HocSinh::layDiemVan() {
    return van;
}
// Lấy điểm toán
float HocSinh::layDiemToan() {
    return toan;
}
//Gán giá trị ten hoc sinh
void HocSinh::gan(string hoTen) {
    this->hoTen = hoTen;
}
//Gán giá trị điểm toán và điểm văn 
void HocSinh::gan(float toan, float van) {
    this->toan = toan;
    this->van = van;
}
//Gán học sinh : tên, điểm toán, điểm văn 
void HocSinh::gan(string hoTen, float toan, float van) {
    this->hoTen = hoTen;
    this->toan = toan;
    this->van = van;
}

float HocSinh::tinhDTB()
{
    return (toan + van) / 2;
}

void HocSinh::xepLoai()
{
    float x = tinhDTB();
    if (x >= 8)
        cout << "Gioi";
    else if (x >= 7)
        cout << "Kha";
    else if (x >= 5)
        cout << "Trung binh";
    else
        cout << "Yeu";
    cout << endl;
}
