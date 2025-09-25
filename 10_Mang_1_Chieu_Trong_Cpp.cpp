/*
Khai báo 1 mảng:
    kiểu_dữ_liệu tên_mảng[số_phần_tử_trong_mảng];

Có thể khở tạo mảng có giá trị của phần tử trước
        kiểu_dữ_liệu tên_mảng[số_phần_tử_trong_mảng] = {giá trị phần tử};

Truy cập đến giá trị các phần tử trong mảng thông qua index bắt đầu từ 0


*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[100]; // khai báo 1 mảng số nguyên có 100 phần tử liền kề nhau trong RAM
    int b[6] = {0,1,2,3,4,5};
    cout << b[2] << endl;

    // Khai báo mảng có n phần tử biết trước
    int n; cin >> n;
    int c[n];    
    for (int i = 0 ; i < n ; i++) {
        cin >> c[i];
    }
    for (int i = 0 ; i < n ; i++) {
        cout << a[i] <<" " << endl;
    }
    return 0;
}