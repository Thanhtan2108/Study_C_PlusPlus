/*
Thường được dùng để lưu trữ các giá trị có cùng 1 kiểu dữ liệu

Khai báo 1 mảng:
    kiểu_dữ_liệu tên_mảng[số_phần_tử_trong_mảng];

Có thể khở tạo mảng có giá trị của phần tử trước
        kiểu_dữ_liệu tên_mảng[số_phần_tử_trong_mảng] = {giá trị phần tử};

Truy cập đến giá trị các phần tử trong mảng thông qua index bắt đầu từ 0
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // Thay vì khai báo 100 biến a int
    // int a0, a1,..., a99;
    int a[100]; // khai báo 1 mảng số nguyên có 100 phần tử liền kề nhau trong RAM
    
    // thay vì kởi tạo và gán giá trị cho 6 biến b int
    // int b0 = 0, b1 = 1, ... , b5 = 5;
    int b[6] = {0,1,2,3,4,5};
    
    // Thay vì in ra cout << b2;
    // Truy xuất đến phần tử trong mảng thông qua chỉ số index
    cout << b[2] << endl;

    // Khai báo mảng có n phần tử biết trước
    // Bắt buộc phải biết trước được số phần tử 
    int n; cin >> n;
    int c[n];    
    // Nhập giá trị cho n phần tử trong mảng 
    for (int i = 0 ; i < n ; i++) {
        cin >> c[i];
    }
    // Xuất giá trị n phần tử trong mảng
    for (int i = 0 ; i < n ; i++) {
        cout << a[i] <<" " << endl;
    }
    
    return 0;
}