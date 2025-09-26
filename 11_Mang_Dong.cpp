/*
Mảng tĩnh: là mảng đã có cố định số lượng phần tử trong mảng khi khai báo

Mảng động :

Cú pháp:
    kiểu_dữ_liệu *tên_mảng = new kiểu_dữ_liệu[số_phần_tử];
    
Với new : giống như cấp phát động malloc() trong C

Khi nào dùng mảng tĩnh/mảng động?
    Nếu như ta đã biết trước số lượng phần tử trong mảng thì dùng mảng tĩnh
    Nếu như ta chưa biết trước được số lượng phần tử trong mảng cho đến khi ta nhập vào số lượng phần tử thì dùng mảng động=> vừa fit với dữ liệu, tránh lãng phí bộ nhớ

Xử lý với mảng động cũng như mảng tĩnh
*/

#include <iostream>

using namespace std;

int main() {
    // mảng tĩnh int có 10 phần tử
    int a[10];

    // mảng động int có 10 phần tử
    int *otherArray = new int[10];

    // nhập giá trị
    for (int i = 0 ; i < 10 ; i++) {
        cin >> otherArray[i];
    }

    // xuất giá trị
    for (int i = 0 ; i < 10 ; i++) {
        cout << otherArray[i] << " " << endl;
    }
    
    return 0;
}