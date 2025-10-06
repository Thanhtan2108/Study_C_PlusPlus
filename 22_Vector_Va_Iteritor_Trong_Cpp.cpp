/*
Vector giống như 1 mảng động không có cố định phần tử

Có thể mở rộng kích thước 

Khai báo 1 vector
    vector<kiểu_dữ_liệu> tên_vector;

Hàm để cho phép đẩy 1 phần tử vào vector
    tên_vector.push_back();

    Cứ mỗi lần dùng .push(); thì phần tử trước đó trong vector được đẩy lùi lại 1 đơn vị index trong vector

Hàm cho biết số lượng phần tử, kích thước của vector có bao nhiêu phần tử
    tên_vector.size();

Vì vector như 1 mảng động nên cũng có thể truy cập các phần tử trong vector thông qua chỉ số index
    Giá trị phần tử đầu tiên trong vector : tên_vector[0]

    Giá trị phần tử cuối cùng trong vector : tên_vector[tên_vector.size() - 1] hoặc tên_vector.back();

Duyệt các phần tử trong vector
    dùng for/for each như mảng động/tĩnh để duyệt thông qua chỉ số index  
        for(int i = 0 ; i < tên_vector.size() ; i++) {
            cout << tên_vector[i] << endl;
        }

        for(int x : tên_vector) {
            cout << x << endl;
        }
    
    dùng iterator để duyệt, iteritor cũng tương tự như index trong mảng nhưng iteritor nó đại diện cho vector
        Cú pháp khai báo iteritor
            vector<kiểu_dữ_liệu>::iteritor tên_iteritor;
        Có thể gán giá trị ban đầu cho iteritor
        có toán tử :: là toán tử phạm vi 
        
        hàm tên_vector.begin() là vị trí con trỏ phần tử đầu tiên
        hàm tên_vector.end() là vị trí con trỏ nằm sau vị trí con trỏ phần tử cuối cùng - nghĩa là index cuối + 1
        biến iteritor tương tự như 1 con trỏ nên khi truy cập cần dùng dấu *tên_iteritor

        for (vector<int>::iterator it = v.begin() ; it != v.end() ; ++it) {
            cout << *it << endl;
        }
        
    dùng auto, nó thay cho khai báo vector <kiểu_dữ_liệu>iteritor
    for (auto it = v.begin() ; it != v.end() ; ++it) {
        cout << *it << endl;
    }

Khai báo 1 mảng có n phần tử được thay thế bằng vector, để duyệt qua cũng dòng vòng for duyệt đến n nhưng phải dùng biến tạm để lưu giá trị biến chạy sau đó push_back vào vector

Khai báo 1 vector và chỉ định số lượng phần tử cho vector đó và khởi tạo giá trị ban đầu cho vector đó
    vector<kiểu_dữ_liệu> tên_vector(số_lượng_phần_tử, giá_trị_ban_đầu);

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
    
    // dùng for duyệt thông qua index
    for (int i = 0 ; i < v.size() ; i ++) {
        cout << v[i] << endl;
    }
    
    // dùng for each duyệt qua các index
    for (int x : v) {
        cout << x << endl;
    }

    // duyệt thông iterator
    for (vector<int>::iterator it = v.begin() ; it != v.end() ; ++it) {
        cout << *it << endl;
    }
    
    // duyệt qua auto
    for (auto it = v.begin() ; it != v.end() ; ++it) {
        cout << *it << endl;
    }
    
    // cho 1 mảng a có n phần tử, có thể thay bằng vector v đã có sẵn n phần tử
    // nhập các giá trị vào vector
    int n; cin >> n;
    vector<int> v; // tương đương a[n];
    for (int i = 0 ; i < n ; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    for (int i = 0 ;  i < n ;  i++) {
        cout << v[i] << endl;
    }
    
    // khai báo vector có n phần tử và có giá trị ban đầu là 10
    int m; cin >> m;
    vector<int> vector(m, 10);
    for (int i = 0 ; i < m ; i++) {
        cout << vector[i] << endl;
    }
    // mở rộng thêm vector ra
    vector.push_back(20);

    return 0;
}