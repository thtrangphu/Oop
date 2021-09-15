
#include<iostream>
using namespace std;

// Phân Số = Tử số / Mẫu số 
struct PhanSo {
	int tuSo;
	int mauSo;
};

// Nhập tử và mẫu số 
void nhapPhanSo(PhanSo& x) {
	cout << "Nhap tu so: ";
	cin >> x.tuSo;
	do {
		cout << "Nhap mau so: ";
		cin >> x.mauSo;
		//Nếu mẫu số bằng 0 thì nhập lại 
		if (x.mauSo == 0)
		{
			cout << "Mau so khong the bang 0. Xin vui long kiem tra lai! " << endl;
		}
	} while (x.mauSo == 0);

}

// Xuất phân số 
void xuatPhanSo(PhanSo x) {
	// Ví dụ nhập phân số 3/-2 thì ta cần đổi thành -3/2 hay -3-2 => 3/2 
	if (x.mauSo < 0) {
		x.tuSo *= -1;
		x.mauSo *= -1;
	}
	cout << x.tuSo << "/" << x.mauSo;
}

// Tìm ước chung của tử và mẫu để rút gọn 
int uocChung(int x, int y) {
	// Nếu x hay y bằng 0 thì dừng vòng lặp 
	while (x * y != 0) {
		if (x > y)
		{
			x %= y;
		}
		else
		{
			y %= x;
		}
	}
	return x + y;
}

// Rút gọn phân số 
PhanSo rutGonPhanSo(PhanSo& x) {
	// Tìm ước chung của cả tử và mẫu 
	int m = uocChung(x.tuSo, x.mauSo);

	// Chia tử và mẫu cho ước chung 
	x.tuSo /= m;
	x.mauSo /= m;

	//Trả về phân số đã được rút gọn 
	return x;
}

//Dùng con trỏ hàm trực tiếp *p
//Tham số hóa kiểu 
template <class T>
T  tinhToan(T x, T y, T(*p)(T, T)){
	return p(x, y);
}
template <class T>
T cong(T a, T b) {
	return a + b;
}
template <class T>
T tru(T a, T b) {
	return a - b;
}
template <class T>
T nhan(T a, T b) {
	return a * b;
}
template <class T>
T chia(T a, T b) {
	return a / b;
}
// Tính tổng 2 phân số  
PhanSo cong(PhanSo a, PhanSo b) {
	PhanSo tong;

	tong.tuSo = a.tuSo * b.mauSo + a.mauSo * b.tuSo;
	tong.mauSo = a.mauSo * b.mauSo;

	rutGonPhanSo(tong);
	return tong;
}

// Tính hiệu 2 phân số  
PhanSo tru(PhanSo a, PhanSo b) {
	PhanSo hieu;

	hieu.tuSo = a.tuSo * b.mauSo - a.mauSo * b.tuSo;
	hieu.mauSo = a.mauSo * b.mauSo;

	rutGonPhanSo(hieu);
	return hieu;
}

// Tính tích 2 phân số  
PhanSo nhan(PhanSo a, PhanSo b) {
	PhanSo tich;

	tich.tuSo = a.tuSo * b.tuSo;
	tich.mauSo = a.mauSo * b.mauSo;

	rutGonPhanSo(tich);
	return tich;
}

// Tính thương 2 phân số  
PhanSo chia(PhanSo a, PhanSo b) {
	PhanSo thuong;
	PhanSo tich = nhan(a, b);

	thuong.tuSo = tich.mauSo;
	thuong.mauSo = tich.tuSo;

	rutGonPhanSo(thuong);
	return thuong;
}

//Tìm giá trị phân số
float giaTri(PhanSo a) {
	return (float)a.tuSo / a.mauSo;
}

//So sánh 2 phân số 
int soSanh(PhanSo a, PhanSo b) {
	float x = giaTri(a);
	float y = giaTri(b);

	/*
	So sánh x,y (với x, y là giá trị 2 phân số
	Nếu x > y trả về 1 (nghĩa là Phân Số 1 > Phân Số 2)
	Nếu x = y trả về 0 (hai phân số bằng nhau)
	Ngược lại thì x < y trả về -1 ( Phân số 1 < Phân số 2)
	*/
	if (x > y)
		return 1;
	else if (x == y)
		return 0;
	else
		return -1;
}

// Nhập mảng phân số 
void nhapN(PhanSo p[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "============== NHAP PHAN SO THU " << i + 1 << " ==============\n";
		nhapPhanSo(p[i]);
		cout << endl;
	}
}

// Xuất mảng phân số 
void xuatN(PhanSo p[], int n) {
	cout << "Mang phan so la: " << endl;

	for (int i = 0; i < n; i++) {
		xuatPhanSo(p[i]);
		cout << ",  ";
	}
}

// Rút gọn mảng phân số 
void rutGonN(PhanSo p[], int n) {
	for (int i = 0; i < n; i++) {
		rutGonPhanSo(p[i]);
	}
}


// Sắp xếp 

int main() {

		PhanSo a, b, x;

		nhapPhanSo(a);
		nhapPhanSo(b);

		x = tinhToan(a, b, cong);
		xuatPhanSo(x);
		int y;
		y = tinhToan(3, 5, cong);
		cout << endl << y;
		/*cout << "\nTong 2 ps: ";
		x = tinhTong(a, b);
		xuatPhanSo(x);

		cout << "\nHieu 2 ps: ";
		x = tinhHieu(a, b);
		xuatPhanSo(x);

		cout << "\nTich 2 ps: ";
		x = tinhTich(a, b);
		xuatPhanSo(x);

		cout << "\nThuong 2 ps: ";
		if (b.tuSo == 0) {
			cout << "khong tim duoc ket qua khi tu phan so 2 bang 0.";
		}
		else {
			x = tinhThuong(a, b);
			xuatPhanSo(x);
		}

		cout << "\nSo sanh 2 ps: ";
		int ss = soSanh(a, b);
		if (ss == 1) {
			cout << "Phan so ";
			xuatPhanSo(a);
			cout << " lon hon phan so ";
			xuatPhanSo(b);
		}
		else if (ss == 0) {
			cout << "Phan so ";
			xuatPhanSo(a);
			cout << " bang phan so ";
			xuatPhanSo(b);
		}
		else {
			cout << "Phan so ";
			xuatPhanSo(a);
			cout << " nho hon phan so ";
			xuatPhanSo(b);
		}
		cout << endl << endl;
	}*/

}
