/*
đối với các tham số là các kiểu dữ liệu thường/ kiểu dữ liệu tự định nghĩa, khi truyền tham chiếu sẽ làm thay đổi giá trị gốc
để không làm thay đổi giá trị gốc khi truyền tham chiếu, ta dùng thêm từ key word là : const trước các kiểu dữ liệu của tham số được truyền vào
khi gọi hàm và truyền tham chiếu giá trị vào trong hàm, các giá trị này sẽ được đưa đi xử lý trong hàm và không cho phép thay đổi các giá trị này bên trong hàm đó
Nếu thay đổi giá trị của tham số truyền vào hàm, hàm sẽ báo lỗi ngay
*/

#include <iostream>

using namespace std;

string fullName (const string &firstName, const string &lastName) {
    return firstName + lastName;
}

int main() {
    cout << fullName("thanh", "tan") << endl;

    return 0;
}