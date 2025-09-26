/*
Mảng luôn kết thúc bởi ký tự \0

Khi làm việc với mảng ký tự cần khai báo số lượng phần tử cho mảng này là length + 1 ký tự

Để lấy độ dài thực tế của mảng ký tự
    dùng strlen(mảng); trả về size_t

Cách đọc vào chuỗi ký tự có dấu cách
    Do cin chỉ đọc ký tự đến khi gặp khoảng trắng thì dừng
    Cần phải xử lý chuỗi chứa khoảng trắng
    Nếu không xử lý khoảng trắng thì chỉ nhận đến khi khoảng trắng xuất hiện

    Để xử lý và cho phép đọc vào khoảng trắng
    Dùng cin.getline(tên_mảng_chứa_ký_tự, số_phần_tử_mảng - 1));

Trước khi nhập chuỗi cho mảng, cần xử lý ký tự enter từ bàn phím khi có nhập gì đó trước đó
    Dùng cin.ignore(); để bỏ qua ký tự enter vầ cho phép nhập chuỗi
*/

#include <iostream>
#include <cstring> // dùng strlen

using namespace std;

int main() {
    // tạo 1 mảng ký tự
    char message[] = "Hello";

    // in ra 
    cout << message << endl;

    // chuỗi được in ra không chứa \0 nhưng lúc nào trong mảng cũng có ký tự kết thúc là \0
    
    size_t length = strlen(message);

    // in ra độ dài thực tế, không tính ký tự \0
    cout << length << endl;

    // xử lý ký tự enter trước khi nhập chuỗi
    cin.ignore();
    
    char fullName[200];

    // Nhập vào mảng không nhận khoảng trắng

    // cin >> fullName;

    // cout << "Hello " << fullName << endl;

    // nhập vào mảng có nhận khoảng trắng
    cin.getline(fullName, 199);

    cout << "Hello " << fullName << endl;

    return 0;
}