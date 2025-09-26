/*
Trick tang toc do doc ghi bang 2 lenh:
ios::sync_with_stdio(false);
cin.tie(nullptr);
*/

/*
Khong nen include <bts/stdc++.h> 
Can include tung thu vien can su dung
*/

/*
Ham:
Syntax: 
return_type function_name(parameter1, parameter2, ...) {
    code block
    return value;
}

return_type: cac kieu du lieu ma ham tra ve, rieng kieu du lieu void thi khong can return_value;

Nếu hàm chỉ thực hiện 1 chức năng tính toán/ kiểm tra đơn giản thì chỉ cần return về phép tính/ kiểm tra đó.

Ham duoc khoi tao co noi dung ben tren ham main hoac khai bao prototype cho ham tren ham main va dinh nghia ham ben duoi ham main

Ham phai duoc dinh nghia truoc khi su dung

Ham duoc chay trong main hoac trong 1 ham khac

Can chu y kieu du lieu tra ve cua ham va cac tham so cua ham de tranh bi loi tran so

Co 2 cach truyen tham so vao ham la truyen tham chieu va truyen tham tri:
- Truyen tham chieu: truyen dia chi (&) cua bien vao ham, khi thay doi gia tri cua bien trong ham thi bien ngoai cung thay doi theo => tham so cua ham la dia chi cua doi so
    Thường dùng cho 1 hàm thực hiện 1 chức năng thay đổi/cập nhật thông tin nào đó
    Hàm sẽ lấy trực tiếp giá trị của tham số được truyền vào mà không tạo thêm biến
    => Tiết kiệm được bộ nhớ

- Truyen tham tri: truyen gia tri cua bien vao ham, khi thay doi gia tri cua bien trong ham thi bien ngoai cung khong thay doi => tham so cua ham la gia tri cua doi so
    trong hàm sẽ được tạo thêm 1 biến để lưu giá trị của tham số truyền vào để tính toán
    => gây tốn thêm bộ nhớ

Tại sao cần return 0 trong hàm main()
    để tường mình cho biết nếu hàm chạy không có lỗi thì trả về 0, có lỗi thì trả về khác 0
    nên viết return 0
    hoặc return EXIT_FAILURE nếu chương trình có lỗi
    hoặc return EXIT_SUCCESS nếu chương trình không lỗi

Hàm bình thường
    Khi gặp lời gọi hàm từ hàm main(), chương trình sẽ nhảy ra ngoài hàm main() và thực hiện nội dung hàm
    Đến khi thực hiện nội dung hàm xong sẽ quay lại vào hàm main() thực hiện các lệnh tiếp theo
    => Làm tốn thời gian chay của chương trình, không tối ưu

Hàm inline 
    Thường dùng với các hàm có nội dung tương đối ngắn/ đơn giản
    Có chức năng thay vì khi gặp lời gọi hàm trong main() sẽ nhảy đến hàm đó để thực hiện như hàm bình thường
    Thì sẽ kéo nội dung của hàm được gọi đó vào tại vị trí lời gọi hàm trong main() và thực hiện đến khi xong thì nhảy qua lệnh tiếp theo
    => làm cho hàm main() chạy liên tục, không ngắt quãng => tối ưu 

    Cú pháp:
    inline kiểu_dữ_liệu_trả_về tên_hàm(parameter) {
        return do something basic;
    }

Tham số mặc định của hàm
    là tham số được gán giá trị trước, tính từ phải sang trái của hàm đó
    nếu truyền các đối số vào hàm mà không truyền cho tham số đã được gán giá trị trước đó thì hàm sẽ nhận giá trị được gán trước làm đối số

Khai báo nguyên hàm của hàm trước khi xây dựng hàm
    vì flow chương trình thực hiện từ trên xuống dưới nên nếu muốn gọi hàm trong main() thì phải xây dựng hàm trước main()
    điều này gây khó khăn và thiếu thuận tiện
    việc khai báo nguyên hàm của hàm trước main() rồi thì có thể dùng gọi hàm trong main() trước khi đi định nghĩa hàm đó ở bên trên/dưới main() đều được
*/

#include <iostream>
#include <iomanip>

using namespace std;

inline void xinchao() {
    cout << "Xin chao\n";
}

void in(int a) { // a dgl tham so cua ham
    cout << "In ra " << a << endl;
}

int tinhTong(int a, int b) {
    cout << a << b << endl;
    return a+b;
}

// Xay dung ham tra ve true false ben ngoai main, sau do can xu ly gi thi xu ly trong main
bool kiemTraChanLe(int n) {
    return n % 2 == 0; // tra ve true neu n chan, false neu n le
}

void truyenthamchieu(int &a) {
    a += 10;
}

void truyenthamtri(int a) {
    a += 10;
}

int main() {

    // call function xinchao
    // thay vì ra ngoài main() thực hiện thì hàm được kéo vào trong main()
    xinchao;

    // call function in
    int x;
    cin >> x;
    in(x); // x dgl doi so 

    int a = 4, b = 5;
    int tong = tinhTong(a,b);
    cout << "Tong cua " << a << " va " << b << " la: " << tong << endl;
    
    // call function kiemTraChanLe
    kiemTraChanLe(x) ? cout << x << " la so chan\n" : cout << x << " la so le\n";

    // call function truyenthamhchieu
    int n = 20;
    truyenthamchieu(n);
    cout << n << endl; // n = 30, thay doi gia tri cua n vi doi so n va tham so a nam cung o nho luu cung gia tri

    // call function truyenthamtri
    int m = 20;
    truyenthamtri(m);
    cout << m << endl; // m = 20, khong thay doi gia tri cua m vi doi so m va tham so a nam o 2 o nho luu 2 gia tri khac nhau
    
    return 0;
}