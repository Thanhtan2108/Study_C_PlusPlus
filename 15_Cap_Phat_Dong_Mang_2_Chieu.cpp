/*
Mảng 2 chiều thường dùng để lưu trữ cấu trúc có dạng ma trận

Nếu cấp phát tĩnh thì sẽ cố định lại kích thước dữ liệu
đôi khi điều này là không đúng vì chưa biết dữ liệu được lưu có kích thước bao nhiêu
=> có thể gây thừa/thiếu kích thước lưu trữ => gây lãng phí bộ nhớ

Dùng cấp phát động thì có thể fit kích thước mảng với kích thước dữ liệu tại thời điểm lúc đó
=> không gây thừa/thiếu kích thước lưu trữ

Cách khai báo mảng được cấp phát động
    kiểu_dữ_liệu **tên_mảng;

Cấp phát động bằng new cho mảng đã khai báo
    tên_mảng = new kiểu_dữ_liệu *[số_nguyên_số_lượng_phần_tử];
    for (size_t i = 0 ; i < số_lương_phân_tử ; i++) {
        tên_mảng[i] = new kiểu_dữ_liệu[số_lượng_phần_tử];
    }

Sau khi xử lý xong thì cần giải phóng bộ nhớ
    khởi tạo mảng bằng new thì giải phóng bằng delete[] tên_con_trỏ và gán con trỏ về null

*/

#include <iostream>

using namespace std;

int main() {

    // cấp phát động 
    int **array;
    char **friends;

    int rows, cols;
    cin >> rows >> cols;       // người dùng nhập bao nhiêu thì mình cấp phát bấy nhiêu

    array = new int *[rows];
    for (size_t i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    // gán tất cả phần tử = 20
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            array[i][j] = 20;
        }
    }

    for(size_t i = 0 ; i < rows ; i++) {
        for(size_t j = 0 ; j < cols ; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // giải phóng bộ nhớ
    for (int i = 0; i < rows; i++) {
        delete[] array[i];   // giải phóng từng hàng
    }
    delete[] array;          // giải phóng mảng con trỏ
    array = nullptr;

    return 0;
}