/*
Trong bài toán con trỏ
    &: toán tử lấy địa chỉ của biến_lưu_giá_trị
    *: toán tử lấy giá trị của biến_lưu_giá_trị mà biến con trỏ quản lý

Con trỏ bản chất là 1 biến địa chỉ, nó quản lý 1 biến khác và nhận địa chỉ của biến khác đó làm giá trị của nó
Để truy xuất đến giá trị của biến khác mà nó nó quản lý thì dùng toán tử *

Khai báo 1 biến địa chỉ
    kiểu_dữ_liệu* tên_biếnPtr;

Khởi tạo giá trị cho biến địa chỉ
    tên_biếnPtr = &biến_lưu_giá_trị; => gán địa chỉ biến cho con trỏ
    => con trỏ Ptr trỏ đến biến ...
*/

#include <iostream>

using namespace std;

int main() {
    int A = 10;
    cout << "Dia chi cua bien A: " << &A << endl;
    cout << "Gia tri cua bien A: " << A << endl;

    int* aPtr;
    aPtr = &A;
    cout << "Gia tri cua bien con tro aPtr: " << aPtr << endl;
    cout << "Gia tri cua bien A duoc con tro aPtr quan ly: " << *aPtr << endl;

    return 0;
}