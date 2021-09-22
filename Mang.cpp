#include "Mang.h"

//Nhập mảng
void Mang::nhap() {
    int x;
    n = 0;
    cout << "Vui long nhap cac ki tu 'a - z' tren ban phim de dung viec nhap mang! \n";
    while (cin >> x)
    {
        a[n++] = x;
    }
}

//Xuất mảng 
void Mang::xuat()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

//Lấy kích thước mảng
int Mang::layKichThuoc() {
    return n;
}

//Lấy giá trị của phần tử tại vị trí 
int Mang::layPhanTuTaiViTri(int viTri) {
    if (viTri < 0 || viTri >= n) return INT_MAX;
    return a[viTri];
}

//Gán giá trị cho phần tử tại vị trí nào đó 
bool Mang::ganGiaTri(int viTri, int giaTri) {
    if (viTri < 0 || viTri >= n) return 0;
    a[viTri] = giaTri;
    return 1;
}

//Tìm phần tử nào đó trong mảng 
int Mang::timPhanTu(int giaTri) {
    for (int i = 0; i < n; i++) {
        if (a[i] == giaTri) return i;
    }
    return -1;
}

//Sắp xếp 
void Mang::sapXep(bool (*dieuKien)(int, int)) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i+1; j < n; j++)
            //Nếu không đúng điều kiện thì hóan vị 
            if (!dieuKien(a[i], a[j]))
                swap(a[i], a[j]);
}

int soSanh(int x, int y) {
    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

// x trước y trong mảng, x < y là dãy đang tăng 
// x < y trả về true, ngược lại trả về false 
bool tang(int x, int y) {
    return soSanh(x, y) < 0;
}

// x trước y trong mảng, x > y là dãy đang giảm  
// x > y trả về true, ngược lại trả về false 
bool giam(int x, int y) {
    return soSanh(x, y) > 0;
}
