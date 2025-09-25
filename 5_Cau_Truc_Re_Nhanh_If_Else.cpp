#include <bits/stdc++.h>

using namespace std;

/*
Syntax :
if (condition) {
    # code to execute if condition is true
} else {
    # code to execute if condition is false
}

condition dung thi cac cau lenh(khoi lenh) trong if se duoc thuc hien cho den khi dieu kien condition sai se thuc hien khoi lenh trong else

Cac bien the:
- Cac if long nhau
- If else if else....
*/

int main() {
    int a, b;
    int n = 200;
    cin >> a >> b;

    // vi du if co 1 bieu thuc condition
    if (a > b) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is not greater than b" << endl;
    }

    // vi du if co nhieu bieu thuc condition
    if ((n >= 100) && (n <= 500)) {
        cout << "n is in the range of 100 to 500" << endl;
    } else {
        cout << "n is not in the range of 100 to 500" << endl;  
    }

    // vi du if else if 
    int x;
    cin >> x;
    if (x == 1) {
        cout << "chu nhat\n";
    } else if (x == 2) {
        cout << "thu 2\n";
    } else if (x == 3) {
        cout << "thu 3\n";
    } else if (x == 4) {
        cout << "thu 4\n";
    } else if (x == 5) {
        cout << "thu 5\n";
    } else if (x == 6) {
        cout << "thu 6\n";
    } else if (x == 7) {
        cout << "thu 7\n";
    } else {
        cout << "khong phai la thu trong tuan" << endl;
    }

    return 0;
}