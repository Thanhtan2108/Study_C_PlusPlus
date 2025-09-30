/*
các kiến thức tương tự như con trỏ và mảng 1 chiều

Truyền tham số mảng tĩnh vào trong hàm thì số cột phải bằng nhau, số hàng có thể để trống

Truy cập đến các phần tử trong mảng bằng con trỏ
    * : lấy giá trị của ô nhớ tại địa chỉ đó
    (tên_mảng + i) + j : truy cập đến ô nhớ địa chỉ đó
*/

#include <iostream>

using namespace std;

void truyenMangTinh(int a[][10]) {
    for(size_t i = 0 ; i < 10 ; i++) {
        for(size_t j = 0 ; j < 10 ; j++) {
            cout << *(*(a + i) + j) << " ";
        }
        cout << endl;
    }
}

void truyenMangDong1(int *a[]) { // hoặc int *a

}

void truyenMangDong2(int **a) {

}

int main() {
    // khai báo mảng tĩnh
    int a[10][10] = {};

    // khai báo động
    //C1: khai báo con trỏ 1 chiều hàng rồi xây dựng thêm các cột cho nó
    int *b[10]; // hàng
    for (size_t i = 0 ; i < 10 ; i++) {
        b[i] = new int[10]; // trong mỗi hàng xây dựng 1 mảng
    }
    //C2: khai báo kiểu con trỏ chứa con trỏ
    int **c = new int *[3];
    for (size_t i = 0 ; i < 3 ; i++) {
        c[i] = new int[3];
    }

    // khởi tạo các phần tử cho mảng 2 chiều
    for(size_t i = 0 ; i < 3 ; i++) {
        for (size_t j = 0 ; j < 3 ; j++) {
            c[i][j] = i + j;
        }
        cout << endl;
    }

    // truyền đối số vào hàm
    truyenMangTinh(a);
    truyenMangDong1(b);
    truyenMangDong2(c);

    return 0;
}