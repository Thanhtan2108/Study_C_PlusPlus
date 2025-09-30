/*
địa chỉ của 1 mảng (bao gồm cấp phát tĩnh hay cấp phát động) đểu là địa chỉ của phần tử index = 0 của mảng đó

Tham số của hàm là con trỏ thì tham số đó có thể nhận vào 1 mảng/1 con trỏ
    có 3 trường hợp:
        Nếu đối số là 1 biến con trỏ thì chỉ cần truyền tên biến con trỏ đó vào hàm
        Nếu đối số là 1 biến bình thường thì cần truyền địa chỉ (&) của biến đó vào hàm
        Nếu đối số là 1 mảng thì cần truyền tên mảng đó vào hàm 
    Muốn truy xuất đến phần tử thứ i của mảng, truyền địa chỉ của phần tử thứ i (&tên_mảng[i]) vào hàm

Sử dụng con trỏ tương tự như 1 mảng, nghĩa là thay vì có thể truyền 1 mảng vào hàm thì có thể truyền con trỏ đại diện cho mảng đó vào hàm
    con trỏ đại diện cho mảng:
        thường là truyền tên mảng vào hàm
        hoặc có thể truyền 1 con trỏ được gán mảng đó
    
    Các phép toán với con trỏ và mảng 1 chiều
        + : cộng thêm n ô nhớ
        - : trừ bớt n ô nhớ
        ++ : cộng thêm 1 ô nhớ
        -- : trừ bớt 1 ô nhớ
        < : dịch ô nhớ sang trái n ô nhớ
        > : dịch ô nhớ sang phải n ô nhớ
        >= : dịch phải và tính toán trên n ô nhớ 
        <= : dịch trái và tính toán trên n ô nhớ
        == : gán cho ô nhớ

    **Lưu ý: Vì là con trỏ nên các phép toán trên thực hiện trên địa chỉ ô nhớ chứ không phải giá trị ô nhớ

    Mỗi con trỏ nó có kiểu nên các phép toán sẽ được thực hiện dựa vào kích thước của kiểu đó

Không thể dùng trực tiếp con trỏ void nên cần phải ép kiểu con trỏ

Con trỏ NULL là con trỏ không có giá trị
*/

#include <iostream>

using namespace std;

void showResult(void *a) {
    int *tempPtr = (int*)a; // ép kiểu con trỏ
    cout << "Dia chi cua bien " << tempPtr << " la " << &tempPtr << endl;
    cout << "Gia tri cua bien " << tempPtr << " la " << *tempPtr << endl;
}

int main() {
    int d = 10;
    int *c;
    c = &d;

    // cấp phát tĩnh 1 mảng b có 10 phần tử
    int b[] = {0,1,2,3,4,5,6,7,8,9};

    // cấp phát động mảng a có 10 phần tử
    int *a = new int[10];

    // khởi tạo giá trị cho các phần tử của mảng động a
    for (int i = 0 ; i < 10 ; i++) {
        a[i] = 10 * i;
    }

    cout << "dia chi cua mang tinh b la: " << b << endl;
    cout << "dia chi cua phan tu b[0] la: " << &b[0] << endl;

    // truyền trực tiếp tên mảng/địa chỉ con trỏ vào
    showResult(c);
    showResult(&d);
    showResult(a);
    showResult(b);
    showResult(&a[1]);

    return 0;
}