/*
typedef : su dung de dinh nghia 1 ten moi de thay cho kieu du lieu co san hoac tu minh xay dung nen voi ten ngan hon, duoc xu ly boi compiler

Tu C++ 11 tro di, co the su dung tu khoa using de dinh nghia kieu du lieu thay vi tu khoa typedef

define : su dung de thay the 1 ten moi cho 1 gia tri, kieu du lieu, cac vong lap nhu for,..., cac tu khoa co # o dau duoc xu ly boi processor
*/
#include <iostream>

using namespace std;

typedef int songuyen; // khai bao kieu du lieu songuyen la kieu int
typedef long long ll; // khai bao kieu du lieu ll la kieu long long

using ll = long long; 
using songuyen = int; // su dung using de dinh nghia kieu du lieu songuyen la kieu int

#define PI 3.14159265358979323846 // dinh nghia hang so PI
#define songuyen int
#define FOR(i,a,b) for (int i = (a); i < (b); i++) // dinh nghia vong lap FOR tu a den b

int main() {
    ll a;
    songuyen b;

    cout << PI << endl;
    FOR(i, 0, 5) { // su dung vong lap FOR tu 0 den 5
        cout << "Gia tri i: " << i << endl;
    }

    return 0;
}