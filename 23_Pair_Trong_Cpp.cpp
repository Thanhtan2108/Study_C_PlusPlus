/*
pair : dùng để lưu các cặp kết hợp với nhau, ví dụ như cặp số, cặp số chữ, cặp chữ chữ

Cấu trúc:
    pair<datatype1, datatype2> tên_pair;

Để khởi tạo giá trị cho 1 pair, dùng hàm make_pair(value1, value2);
    từ C++11 trở lên có thể thay make_pair(value1, value2); bằng {value1, value2};

tên_pair.first : phần tử thứ nhất của pair

tên_pair.second : phần tử thứ 2 của pair

nếu dùng để lưu 1 cặp 3 số, cặp 3 số chữ, cặp 3 chữ chữ thì dùng pair lồng nhau lần lượt cho từng cặp
    ví dụ muốn lưu 3 số cùng nhau
        pair<pair<datatype1, datatype2>datatype3> tên_pair;
-> khó quản lý các cặp

=> dùng tuple để thay thế các pair lồng nhau
Cú pháp:
    tuple<datatype1, datatype2, datatype3> tên_tuple;

Có thể khởi tạo tuple thông qua hàm make_tuple(value1, value2, value3);
    từ C++11 trở lên có thể thay make_tuple(value1, value2, value3); bằng {value1, value2, value3};

Để truy cập vào từng phần tử của tuple dùng
    get<index>(tên_tuple);
*/

#include <iostream>
#include <vector>


using namespace std;

int main() {
    pair<int, int> v;
    v = make_pair(100, 200);
    cout << v.first << endl;
    cout << v.second << endl;
    v = {10, 20};
    cout << v.first << endl;
    cout << v.second << endl;

    tuple <int, int, int> t;
    t = {1, 2, 3};
    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;

    return 0;
}