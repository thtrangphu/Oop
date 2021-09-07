#include <math.h>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

/*

            TỌA ĐỘ

*/
class Diem {
private:
    int x, y;
public:
    void nhap() {
        cout << "Nhap hoanh do: "; cin >> x;
        cout << "Nhap tung do :"; cin >> y;
    }
    void xuat() {
        cout << "(" << x << "," << y << ")" << endl;
    }
    float tinhKhoangCach2Diem(Diem a) {
        return sqrt(float(pow((x - a.x), 2) + pow((y - a.y), 2)));
    }
};
int main(){
   //BÀI 3
    Diem a;
    Diem b;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
    cout << a. tinhKhoangCach2Diem(b);
    return 0;
}
