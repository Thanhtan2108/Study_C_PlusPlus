/*
Mảng tĩnh: là mảng đã có cố định số lượng phần tử trong mảng khi khai báo

Mảng động :

Cú pháp:
    kiểu_dữ_liệu *tên_mảng = new kiểu_dữ_liệu[số_phần_tử];
    
Với new : giống như cấp phát động malloc() trong C
    cấp phát động mảng 1 chiều bằng new, new trả về địa chỉ ô nhớ (con trỏ đến phần tử đầu tiên của mảng), bắt buộc phải khai báo một con trỏ (*) để giữ địa chỉ vùng nhớ vừa cấp phát.
    Nếu bạn không dùng con trỏ để nhận, thì bạn không có cách nào truy cập và quản lý vùng nhớ đó.
    
Khi nào dùng mảng tĩnh/mảng động?
    Nếu như ta đã biết trước số lượng phần tử trong mảng thì dùng mảng tĩnh
    Nếu như ta chưa biết trước được số lượng phần tử trong mảng cho đến khi ta nhập vào số lượng phần tử thì dùng mảng động=> vừa fit với dữ liệu, tránh lãng phí bộ nhớ

Xử lý với mảng động cũng như mảng tĩnh

Sau khi xử lý xong thì cần giải phóng bộ nhớ
    khởi tạo mảng bằng new thì giải phóng bằng delete[] tên_con_trỏ và gán con trỏ về null
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
    
    // giải phóng bộ nhớ
    delete[] otherArray;
    otherArray = nullptr;

    return 0;
}