/*
Sets : trong cpp để lưu 1 mảng các phần tử mà các phần tử không thể trùng lặp nhau (khác nhau)

Độ phức tạp của sets là O(log(n))

Giá trị các phần tử trong set sẽ được mặc định sắp xếp theo thứ tự từu bé đến lớn

Khai báo set:
    set<datatype> tên_set;

Các hàm chính cần nắm:
    1. Hàm insert : cho phép chèn thêm 1 phần tử vào trong mảng set

    2. hàm size : trả về số lượng phần tử trong set

    3. Hàm find/count : tìm 1 phần tử trong mảng set
        Tìm bằng cách uyệt 1 vòng for qua các phần tử trong set
        Nếu dùng find(value), nó sẽ trả về 1 iteritor cho phần tử cần tìm, nếu iteritor này khác tên_set.end() thì không nằm trong mảng set
        Nếu dùng count(value), nó sẽ trả về index cho phần tử cần tìm trong mảng set
    
    4. Hàm erase : hàm xóa 1 phần tử trong mảng set
    
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    s.insert(100);
    s.insert(200);
    s.insert(300);
    s.insert(100);
    s.insert(200);

    cout << s.size() << endl;

    return 0;
}