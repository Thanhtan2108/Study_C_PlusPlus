/*
Độ phức tạp của thuật toán ký hiệu : O(f(n))

O(1) là độ phức tạp nhỏ nhất, chủ yếu là các thao tác gán, phép toán toán học, nhập xuất

O(n) là các vòng lặp for, while

O(log(n)) là các phép toán căn n

O(n*m) thường là 2 vòng for lồng nhau

Độ phức tạp của chương trình là O lớn nhất trong main
*/

#include <bits/stdc++.h>

using namespace std;

// O(log(n)) = O(sprt(n))
bool nt(int n) {
    for (int i = 0 ; i < sqrt(n) ; i++) {
        if (n % i == 0) {
            return false;
        }
        return n > 1;
    }
}

int main() {
    int a = 10;
    int b = a + 10;
    int n; cin >> n;
    // O(n*log(n))
    for (int i = 0 ; i < n ; i++) {
        if(nt(i)) {
            cout << i << endl;
        }
    }

    // O(5 * 10)
    for (int i = 0 ; i < 5 ; i++) {
        for (int j = 0 ; j < 10 ; j++) {
            cout << "hello" << endl;
        }
    }
}