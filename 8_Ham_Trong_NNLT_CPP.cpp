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

Ham duoc khoi tao co noi dung ben tren ham main hoac khai bao prototype cho ham tren ham main va dinh nghia ham ben duoi ham main

Ham phai duoc dinh nghia truoc khi su dung

Ham duoc chay trong main hoac trong 1 ham khac

Can chu y kieu du lieu tra ve cua ham va cac tham so cua ham de tranh bi loi tran so

Co 2 cach truyen tham so vao ham la truyen tham chieu va truyen tham tri:
- Truyen tham chieu: truyen dia chi cua bien vao ham, khi thay doi gia tri cua bien trong ham thi bien ngoai cung thay doi theo => tham so cua ham la dia chi cua doi so
- Truyen tham tri: truyen gia tri cua bien vao ham, khi thay doi gia tri cua bien trong ham thi bien ngoai cung khong thay doi => tham so cua ham la gia tri cua doi so
*/

#include <iostream>
#include <iomanip>

using namespace std;

void xinchao() {
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