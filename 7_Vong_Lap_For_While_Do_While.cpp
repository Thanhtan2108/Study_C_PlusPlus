/*
Vong lap for: biet trc so lan lap can thuc hien
Syntax:
for (khoi_tao_bien_chay ; dieu_kien_lap ; dieu_kien_thay_doi_bien_chay) {
    code block
}
Vong lap su dung bien chay de lap cho den khi dieu khien lap bi sai, sau moi lan lap thi se thuc hien dieu kien thay doi bien chay

Trong vong lap for thuong co the su dung cac lenh de thoat khoi vong lap:
- break: dung de thoat khoi vong lap 
- continute: dung de bo qua phan code con lai trong vong lap va tiep tuc lap voi lan lap tiep theo
*/

/*
Vong lap while: su dung khi chua biet truoc duoc minh can lap bao nhieu vong lap
Syntax:
while (dieu_kien_lap) {
    code block
}

Vong lap while se lap cho den khi dieu kien lap sai, trong vong lap co the thay doi gia tri cua bien chay de dieu kien lap sai

Can phai thay doi gia tri cua bien chay de tranh loi lap vo tan

Trong vong lap while thuong co the su dung cac lenh de thoat khoi vong lap:
- break: dung de thoat khoi vong lap    
- continue: dung de bo qua phan code con lai trong vong lap va tiep tuc lap voi lan lap tiep theo
*/

/*
Vong lap Do-While: tuong tu vong lap while, nhung se thuc hien code block it nhat 1 lan truoc khi kiem tra dieu kien lap
Syntax:
do {
    code block
} While (dieu_kien_lap);

Vong lap luon chay code block it nhat 1 lan trong do truoc khi kiem tra dieu kien lap neu sai

Trong code block, phai co lenh thay doi gia tri cua bien chay de tranh lap vo tan
*/

# include <iostream>

using namespace std;

int main() {

    for (int i = 1 ; i <= 10 ; i++) {
        cout << "lap lan thu " << i << endl;
        if (i == 5) {
            cout << "Dung lap tai day" << endl;
            break; // dung vong lap khi i = 5
        }
    }

    int y = 5;
    while (y > 0) {
        cout << "Gia tri cua y la: " << y << endl;
        -- y;
    }

    int n = 0;
    do {
        cout << n;
        n ++;
    } while (n<= 3);

    return 0;
}