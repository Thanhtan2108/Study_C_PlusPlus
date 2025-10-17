/*
syntax:
switch (expression) {
    case x:
        code block
        break;
    case y:
        code block
        break;
    case ...:
        code block
        break;
    default:
        code block
}

Lenh break: dung de thoat khoi switch, neu khong co lenh break, code se tiep tuc chay den cac case tiep theo

Co the gop nhieu case lai voi nhau neu chung 1 code block
*/

#include <iostream>

using namespace std;

int main() {
    int day;
    cout << "Nhap vao mot so tu 1 den 7: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Thu Hai" << endl;
            break;
        case 2:
            cout << "Thu Ba" << endl;
            break;
        case 3:
            cout << "Thu Tu" << endl;
            break;
        case 4:
            cout << "Thu Nam" << endl;
            break;
        case 5:
            cout << "Thu Sau" << endl;
            break;
        case 6:
            cout << "Thu Bay" << endl;
            break;
        case 7:
            cout << "Chu Nhat" << endl;
            break;
        default:
            cout << "Khong hop le, vui long nhap lai!" << endl;
    }

    // vi du gop nhieu case
    int month;
    cout << "Nhap vao mot so tu 1 den 12: ";
    cin >> month;
    switch(month) {
        // cach gop thu nhat
        case 1:
        case 3:
        case 5:
        case 7: 
        case 8:
        case 10:
        case 12:
            cout << "Thang co 31 ngay\n";
            break;
        // cach gop thu hai
        case 4: case 6: case 9: case 11:
            cout << "Thang co 30 ngay\n";
            break;
        case 2:
            cout << "Thang co 28 ngay\n";
            break;
        default:
            cout << "Thang khong hop le\n";
    }
    return 0;
}