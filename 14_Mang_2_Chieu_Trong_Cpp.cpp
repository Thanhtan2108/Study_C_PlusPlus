/*
Khai báo mảng 2 chiều = ma trận
    kiểu_dữ_liệu tên_mảng[số_hàng][số_cột];

Các chỉ số tương tự mảng 1 chiều

Có thể tạo ma trận không cần phải biết trước số hàng nhưng phải biết trước số cột

Muốn lưu mỗi dòng có số lượng phần tử khác nhau thì có thể dùng vecto
    vector<kiểu_dữ_liệu> tên_mảng[số_phần_tử];

Có thể khởi tạo cùng 1 giá trị cho toàn bộ các phần tử trong mảng bằng hàm fill()
    fill(tên_mảng[0], tên_mảng[0] + [phần_tử_hàng]*[phần_tử_cột], giá_trị);
    lưu ý: fill chỉ khởi tạo cho các phần tử nằm liền kề nhau bên trong bộ nhớ, nằm rời rạc không thể khỏi tạo
*/

#include <bits/stdc++.h>

using namespace std;

// xây dựng 1 hàm nhập cho mảng 2 chiều
void nhap(int a[][100], int n, int m) {
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
        }
    }
}

void in(int a[][100], int n, int m) {
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl; // cout << "\n";
    }
}

int main() {
    int a[2][3];
    //
    int mang2chieubang0 [][100] = {0};
    //
    int b[2][3] = {{1,2,3}, {3,4,5}};
    //
    int mang2chieu[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //
    int n, m; 
    cin >> n >> m;
    int c[n][m];
    //nhập ma trận
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cin >> a[i][j];
        }
    }
    // xuất ma trận
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl; // cout << "\n";
    }
    //
    int x, y; cin >> x >> y;
    int d[100][100];
    nhap(d, x, y); // mảng truyền vào hàm phải có kích thước bằng mảng tham số trong hàm
    in(d, x, y);

    //
    // làm việc với ma trận mỗi dòng có nhiều cột khác nhau
    // 1 2
    // 1 2 3 4
    // 1 5
    int e; cin >> e;
    vector<int> f[e];
    // nhập cho ma trận vector
    for (int i = 0 ; i < e ; i++) {
        int g; cin >> g; // số lượng phần tử trên 1 dòng i
        for (int j = 0 ; j < g ; j++) {
            int h; cin >> h; // biến tạm chứa các giá trị của phần tử trong dòng i
            f[i].push_back(h); // đẩy giá trị của biến tạm vào vị trí phần tử thứ g trong dòng i
        }
    }
    // in ra ma trận vector
    for (int i = 0 ; i < e ; i++) {
        for (int j = 0 ; j < f[i].size() ; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //
    // Ma trận chuỗi, ký tự mỗi dòng có số lượng ký tự khác nhau
    int i; cin >> i;
    string l[i];
    // xử lý chuỗi, ký tự
    cin.ignore();
    for (int i = 0 ; i < i ; i++) {
        // đọc chuỗi có dấu cách
        getline(cin , l[i]);
    }
    for (int i = 0 ; i < i ; i++) {
        cout << l[i] << endl;
    }
    return 0;
}