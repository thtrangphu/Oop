#include "PhanSo.h"

int main() {
    //BÀI 2
    PhanSo p1, p2, ketQua;
    cout << "\n-----        NHAP PHAN SO          ---\n";
    p1.nhap();

    cout << "\n-----        XUAT PHAN SO          ---\n";
    p1.xuat();

    cout << "\n-----  LAY TU SO, MAU SO PHAN SO   ---\n";
    cout << "Tu so: " << p1.layTuSo();
    cout << "\nMau so: " << p1.layMauSo() << endl;

    cout << "\n-----      PHAN SO NGHICH DAO      ---\n";
    p2 = p1.nghichDao();
    p2.xuat();

    cout << "\n-----       RUT GON PHAN SO        ---\n";
    p1.rutGon();

    cout << "\n-----        CONG 2 PHAN SO        ---\n";
    cout << "Nhap them phan so thu 2: " << endl;
    p2.nhap();
    ketQua = p1.cong(p2);
    cout << "Tong 2 phan so la: ";
    ketQua.xuat();

    cout << "\n-----        NHAN 2 PHAN SO        ---\n";
    ketQua = p1.nhan(p2);
    cout << "Tich 2 phan so la: ";
    ketQua.xuat();

    cout << "\n-----       SO SANH 2 PHAN SO      ---\n";
    int ss = p1.soSanh(p2);
    if (ss == 0)
        cout << "Hai phan so bang nhau. ";
    else if (ss == 1)
    {
        cout << "Phan so ";
        p1.xuat();
        cout << " lon hon phan so ";
        p2.xuat();
    }
    else
    {
        cout << "Phan so ";
        p1.xuat();
        cout << " nho hon phan so ";
        p2.xuat();
    }
    cout << endl;

    return 0;
}
