
#include "HocSinh.h"
int main() {

    //BÀI 2.3
    HocSinh s;

    cout << "\n-----        NHAP HOC SINH         ---\n";
    s.nhap();

    cout << "\n-----        XUAT HOC SINH         ---\n";
    s.xuat();

    cout << "\n-----  LAY GIA TRI CHO HOC SINH    ---\n";
    cout << "Ho ten: " << s.layHoTen() << endl;
    cout << "Diem toan: " << s.layDiemToan() << endl;
    cout << "DIem van: " << s.layDiemVan() << endl;

    cout << "\n-----  GAN GIA TRI CHO HOC SINH    ---\n";
    s.gan("Phu Thi Kim Trang");
    s.gan(10, 9);
    s.xuat();

    s.gan("Hoang Minh Anh", 8, 9);
    s.xuat();

    cout << "\n-----        DIEM TRUNG BINH       ---\n";
    cout << s.tinhDTB() << endl;

    cout << "\n-----           XEP LOAI           ---\n";
    s.xepLoai();
}
