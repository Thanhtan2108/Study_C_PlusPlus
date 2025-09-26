/*
Vector giống như 1 mảng động không có cố định phần tử

Có thể mở rộng kích thước 

Khai báo 1 vector
    vector<kiểu_dữ_liệu> tên_vector;

Hàm để cho phép đẩy 1 phần tử vào vector
    push_back();

Hàm cho biết số lượng phần tử, kích thước của vector
    size();

Có thể truy cập các phần tử trong vector thông qua chỉ số index

Duyệt các phần tử trong vector
    dùng for() {
    
    } để duyệt thông qua chỉ số
    
    dùng iterator để duyệt, có toán tử :: là toán tử phạm vi, hàm begin() là vị trí con trỏ phần tử đầu tiên, hàm end() là vị trí con trỏ nằm sau vị trí con trỏ phần tử cuối cùng

    dùng auto

Khai báo 1 mảng có n phần tử thay thế bằng vector, để duyệt qua cũng dòng vòng for duyệt đến n nhưng phải dùng biến tạm để lưu giá trị biến chạy sau đó push_back vào vector

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(10);
    v.push_back(20);
    cout << v.size() << endl;
    v.push_back(15);
    cout << v.size() << endl;
    cout << "Phan tu dau tien trong vector: " << v[0] << endl;
    cout << "Phan tu cuoi cung trong vector: " << v[v.size() - 1] << endl;
    cout << "Phan tu cuoi cung trong vector: " << v.back() << endl;
    // duyệt thông qua index
    for (int i = 0 ; i < v.size() ; i ++) {
        cout << v[i] << endl;
    }
    // duyệt thông iterator
    for (vector<int>::iterator it = v.begin() ; it != v.end() ; ++it) {
        cout << *it << endl;
    }
    // duyệt qua auto
    for (auto it = v.begin() ; it != v.end() ; ++it) {
        cout << *it << endl;
    }
    //
    int n; cin >> n;
    vector<int> v; // tương đương v[n];
    for (int i = 0 ; i < n ; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    for (int i = 0 ;  i < n ;  i++) {
        cout << v[i] << endl;
    }
    return 0;
}