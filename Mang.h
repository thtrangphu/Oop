#pragma once
#include <iostream>
using namespace std;
#define MAX_SIZE 100
class Mang
{
private:
	int a[MAX_SIZE];
	int n;
public:
	//Nhập mảng
	void nhap();
	//Xuất mảng 
	void xuat();
	//Lấy kích thước mảng
	int layKichThuoc();
	//Lấy giá trị của phần tử tại vị trí 
	int layPhanTuTaiViTri(int viTri);
	//Gán giá trị cho phần tử tại vị trí nào đó 
	bool ganGiaTri(int viTri, int giaTri);
	//Tìm phần tử nào đó trong mảng 
	int timPhanTu(int giaTri);
	//Sắp xếp 
	void sapXep(bool (*dieuKien)(int, int));

};


int soSanh(int x, int y);

//Kiem tra tang
bool tang(int x, int y);

//Kiem tra giam 
bool giam(int x, int y);
