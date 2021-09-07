#include <math.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int timUocChungLonNhat(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (1) {
        if (a > b) {
            a = a - b;
        }
        else if (a < b) {
            b = b - a;
        }
        else return a;
    }
}

/*

            PHÂN SỐ 


*/
class PhanSo {
private:
    int tu, mau;
public:
    void nhap() {
        cout << "Nhap tu so: "; cin >> tu;
        cout << "Nhap mau so: ";
        do {
            cin >> mau;
            if (mau == 0) cout << "Vui long nhap mau so khac 0: ";
        } while (mau == 0);

    }
    void xuat() {
        if (mau < 0) {
            tu *= -1;
            mau *= -1;
        }
        cout << tu << "/" << mau << endl;
    }
    void kiemTraAmDuong() {
        if (tu * mau > 0) {
            cout << "Phan so duong: " << abs(tu) << "/" << abs(mau) << endl;

        }
        else if (tu == 0) cout << "Phan so bang 0" << endl;
        else cout << "Phan so am: " << "-" << abs(tu) << "/" << abs(mau) << endl;
    }
    
    
    void rutGon() {
        int ucln  = timUocChungLonNhat(tu, mau); //nếu để như thế này sẽ sai vì tu đã bị thay đổi sau khi chia uocChung 
        /*
        * this->tu = this->tu / uocChung(tu, mau);
        this->mau = this->mau / uocChung(tu,mau);
        */
        tu /= ucln;
        mau /= ucln;
    }
};
int main(){
  //BÀI 2
    PhanSo p;
    p.nhap();
    p.xuat();
    p.rutGon();
    p.xuat();
    return 0;
}
