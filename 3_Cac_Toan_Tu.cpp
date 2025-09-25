#include <bits/stdc++.h>

using namespace std;

/*
Cac toan tu co ban trong C++:
- Toan tu so hoc: +, -, *, /, %
- Toan tu so sanh: ==, !=, <, >, <=, >=
- Toan tu logic: && (and), ||(or), !(not)
- Toan tu gan: =, +=, -=, *=, /=, %=
- Toan tu dieu kien: ? :
- Toan tu bit: &, |, ^, ~, <<, >>
- Toan tu con tro: *, &
- Toan tu 1 ngoi: ++ (gan gia tri tang len 1), -- (gan gia tri giam xuong 1)
- Toan tu gan bit: &=, |=, ^=, <<=, >>=
- Toan tu gan logic: &&=, ||=, !=

Ham toan trong thu vien math.h:
pow(a, b) - Tinh a mu b
sqrt(a) - Tinh can bac hai cua a
abs(a) - Tinh gia tri tuyet doi cua a
ceil(a) - Lam tron len so nguyen gan nhat
floor(a) - Lam tron xuong so nguyen gan nhat
round(a) - Lam tron so thap phan gan nhat
*/

int main() {
    int chieudai = 20, chieurong = 10;
    int dientich = chieudai * chieurong;
    int chuvi = 2 * (chieudai + chieurong);
    cout << "Dien tich hinh chu nhat: " << dientich << endl;
    cout << "Chu vi hinh chu nhat: " << chuvi << endl;
    cout << "Toan tu so sanh: " << (chieudai > chieurong ? "Chieu dai lon hon chieu rong" : "Chieu rong lon hon chieu dai") << endl;
    cout << "Chieu dai gap chieu rong " << (chieudai / chieurong) << " lan" << endl;

    int a = 5, b = 10;
    int tong = a + b;
    int hieu = a - b;
    long long tich = 1LL * a * b; // 1LL de ep kieu sang long long
    double thuong = (double)a / b; // hoac double thuong = a / (double)b; hoac double thuong = (double)a / (double)b; hoac double thuong = 1.0 * a / b;
    int sodu = a % b; 
    cout << "Tong: " << tong << endl;
    cout << "Hieu: " << hieu << endl;
    cout << "Tich: " << tich << endl;
    cout << "Thuong: " << fixed << setprecision(3) << thuong << endl;
    cout << "So du: " << sodu << endl;

    int x = 10, y = 20;
    x++;
    --y;
    cout << x << " " << y << endl;

    return 0;
}