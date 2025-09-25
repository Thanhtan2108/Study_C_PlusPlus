#include <iomanip>
#include <iostream>

using namespace std;

/*
Kieu du lieu so nguyen : 
    int(4 byte) : kich thuoc [-2.10^9, 2.10^9]
    long long(8 byte) : kich thuoc [-9.10^18, 9.10^18]
Kieu du lieu so thuc : 
    float(4 byte, 6 so thap phan) 
    double(8 byte, 15 so thap phan)
Kieu du lieu ky tu : 
    char(1 byte, 1 ky tu), dung dau ' ' 
Kieu du lieu Boole :
    True/False(1 byte), in ra 1 hoac 0
*/

//--------------------------------------------------------------------------------------//

/*
Syntax khai bao 1 bien : Kieu_Du_Lieu Ten_Bien; 

Cac quy tac dat ten bien:
- Ten bien bat dau bang chu cai hoac dau _ (khong duoc bat dau bang chu so)
- Ten bien khong duoc chua dau cach hoac ky tu dat biet, khong dau
- Ten bien khong duoc trung voi cac tu khoa trong C++
- Ten bien khong nen dat qua dai va nen dat ten bien co nghia
- Ten bien co the phan biet bang chu hoa hoac _ giua cac tu de phan biet

Co the khai bao nhieu bien cung kieu du lieu trong 1 dong, cach nhau boi dau phay

Co the khia bao 1 bien co kieu du lieu va co gia tri

Neu gia tri cua bien vuot qua kich thuoc kieu du lieu thi loi tran bo nho, se in ra 1 so bat ky

Voi kieu du lieu so thuc, de in ra do chinh xac sau dau phay can dung cau truc cout << fixed << setprecision(n) << bien << endl; , trong do n la so chu so thap phan sau dau phay can hien thi
*/

int main() {
    
    // khai bao bien va gan gia tri cho bien (neu can)
    int bankinh;
    long long dientich = 1000000000; // 1 ty
    float chuvi;
    double pi = 3.14159265358979323846; // 3.14159265358979323846
    char kytu = '1';

    // In ra man hinh gia tri cua bien
    cout << pi << endl;
    
    // In ra chuoi va gia tri cua bien 
    cout << "Dien tich: " << dientich << endl;

    // In ra so pi voi do chinh xac la 4
    cout << "Gia tri cua pi la: " << fixed << setprecision(4) << pi << endl;
    
    return 0;
}