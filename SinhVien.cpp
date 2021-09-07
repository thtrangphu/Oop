#include <math.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
/*

            SINH VIÊN 

*/
class Ngay {
private:
    int ngay;
    int thang;
    int nam;
public:
    void nhap() {
        cout << "Nhap ngay: "; cin >> ngay;
        cout << "Nhap thang: "; cin >> thang;
        cout << "Nhap nam: "; cin >> nam;
    }
    void xuat() {
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
};
class SinhVien {
protected:
    int maSo;
    string hoTen;
    Ngay ngaySinh;
    float toan, ly, hoa;
public:
    void nhap();
    void xuat();
};
void SinhVien :: nhap() 
{
    cout << "Nhap ma so: ";
    cin >> maSo;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, hoTen);
    cout << "Nhap ngay sinh: "; ngaySinh.nhap();

}
void SinhVien:: xuat() {
    cout << "MS: " << maSo << "  -  " << "Ten: " << hoTen << "  -   " << "  -  Diem: " << toan << "-" << ly << "-" << hoa;
    cout << "   - Ngay sinh: "; ngaySinh.xuat();
}
int main() {

    //BÀI 1
    SinhVien s;
    s.nhap();
    s.xuat();
}
