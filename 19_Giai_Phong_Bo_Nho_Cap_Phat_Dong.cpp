/*
Thu hồi bộ nhớ chủ động:
Cú pháp: delete tên_con_trỏ; / delete[] tên_con_trỏ;

- Với con trỏ NULL

- Với con trỏ có/không có tham chiếu

- Với con trỏ không trỏ đến biến không cấp phát động

- Với con trỏ mảng

- Với con trỏ void

- Với con trỏ trỏ tới con trỏ
*/

#include <iostream>

using namespace std;

int main() {
    // với con trỏ NULL
    int *nPtr = NULL;
    // Giải phóng bộ nhớ cho con trỏ NULL
    delete nPtr;

    // Với con trỏ không có tham chiếu
    double *dPtr = new double;
    // giải phóng
    delete dPtr;
    // Với con trỏ có tham chiếu
    float *fPtr = new float(3.142564f);
    // giải phóng
    delete fPtr;

    // với con trỏ không trỏ đến biến không cấp phát động
    int *aPtr;
    int a = 100; // biến static
    // C2: int *a = new int(100);
    aPtr = &a;
    // do something
    /*Nếu dùng
    
    delete aPtr;
    
    -> sẽ báo lỗi vì biến a được con trỏ aPtr quản lý không phải cấp phát động
    
    Muốn giải phóng aPtr có 2 cách
        1. đưa con trỏ aPtr về NULL
        2. đưa biến a thành cấp phát động 1 mảng
    */
    //C1:
    aPtr = NULL;
    delete aPtr;
    //C2:
    //delete aPtr;

    // Với con trỏ mảng
    int *arr = new int[100];
    // do something
    delete arr;

    // Với con trỏ void
    void *vPtr;
    int *b = new int(100);
    /*
    Nếu 

    delete vPtr;

    -> chương trình báo lỗi vì void* không có 1 kích thước cụ thể nào.
    Muốn giải phóng cần phải xác định kiểu cụ thể cho nó và kiểu đó cx được khởi tạo cấp phát động
    */
    vPtr = (int*)b;
    delete[] vPtr;

    // Với con trỏ trỏ tới con trỏ
    int **xPtr;
    xPtr = new int*[100];
    for(size_t i = 0 ; i < 100 ; i++) {
        xPtr[i] = new int[10];
    }
    // Giải phóng
    for(size_t i = 0 ; i < 100 ; i++) {
        delete[] xPtr;
    }
    delete xPtr;

    return 0;
}