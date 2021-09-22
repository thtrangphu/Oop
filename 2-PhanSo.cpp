#include "PhanSo.h"

//Nhập phân số 
void PhanSo::nhap()
{
    //Nhập tử số
    cout << "Nhap tu so: "; 
    cin >> tu;

    //Nhập mẫu số 
    cout << "Nhap mau so: ";
    do {
        cin >> mau;
        //Nếu mẫu bằng 0 thì vui lòng nhập lại 
        if (mau == 0) cout << "Vui long nhap mau so khac 0: ";
    } while (mau == 0);

}

//Xuất phân số 
void PhanSo::xuat() {
    //Nếu mẫu < 0 thì nhân cả tử và mẫu cho -1 để xuất màn hình 
    //Loại bỏ trường hợp dấu - dưới mẫu 
    if (mau < 0) {
        tu *= -1;
        mau *= -1;
    }

    cout << tu << "/" << mau << endl;
}

//Ước chung lớn nhất của 2 số 
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

//Rút gọn phân số
// Chia cả tử và mẫu cho ước chung lớn nhất 
void PhanSo::rutGon() {
    //Tìm ước chung lớn nhất của tử và mẫu rồi rút gọn 
    int ucln = timUocChungLonNhat(tu, mau);

    tu /= ucln;
    mau /= ucln;
}

//Lấy tử số 
int PhanSo::layTuSo() {
    return this->tu;
}
//Lấy mẫu số 
int PhanSo::layMauSo() {
    return this->mau;
}
//Gán tử số
void PhanSo::ganTuSo(int tuSo){
    this->tu = tuSo;
}
//Gán mẫu số 
void PhanSo::ganMauSo(int mauSo) {
    this->mau = mauSo;
}

//Phân Số nghịch đảo
PhanSo PhanSo::nghichDao() {
    PhanSo temp; // Phân số temp để lưu kết quả khi nghịch đảo 

    //Hoán vị tử mẫu 
    temp.mau = this->tu;
    temp.tu = this->mau;

    //Trả về kết quả 
    return temp;
}


//Cộng 2 phân số 
PhanSo PhanSo::cong(PhanSo p) {
    PhanSo tong; // Phân số tổng để lưu kết quả khi cộng 2 phân số 

    //Thực hiện tính toán 
    tong.tu = this->tu*p.mau + this->mau * p.tu;
    tong.mau = this->mau * p.mau;

    //Rút gọn tổng 
    tong.rutGon();

    return tong; //Trả về kết quả 
}

//Nhân 2 phân số 
PhanSo PhanSo::nhan(PhanSo p) {
    PhanSo tich; // Phân số tổng để lưu kết quả khi cộng 2 phân số 

    //Thực hiện tính toán 
    tich.tu = this->tu * p.tu;
    tich.mau = this->mau * p.mau;

    //Rút gọn tích
    tich.rutGon();

    return tich; //Trả về kết quả 
}
//Tính giá trị phân số 
double PhanSo::giaTri() {
    return (double)this->tu / this->mau;
}
//So sánh 2 phân số 
/*
    Nếu 2 phân số bằng nhau thì trả về 0
    Nếu phân số this(phân số hiện tại) > p thì trả về 1
    Ngược lại trả về -1 
*/
int PhanSo::soSanh(PhanSo p) {
    double g1 = this->giaTri();
    double g2 = p.giaTri();

    if (g1 == g2)
        return 0;
    else if (g1 > g2)
        return 1;
    return -1;
}
