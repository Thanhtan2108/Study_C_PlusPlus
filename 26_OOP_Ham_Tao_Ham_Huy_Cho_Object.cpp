/*
Chức năng:
    Khởi tạo thông tin thông tin khi tạo đối tượng
    hủy bỏ thông tin khi hủy đối tượng

Hàm tạo và hàm hủy cùng tên với class, nó được xây dựng bên bên trong class đó
    Mặc định khi tạo ra 1 class thì trình biên dịch sẽ tự động tạo ra 1 hàm khởi tạo (constructor) không có tham số cho đối tượng đó
    Nếu cần khởi tạo 1 đối tượng có các tham số truyền vào cho đối tượng thì cần phải xây dựng 1 hàm khởi tạo (constructor) có tham số truyền vào cho đối tượng đó
    Tên của hàm khởi tạo bắt buộc phải trùng tên_Class

    Hàm hủy (distructor) được tạo ra khi cần hủy đối tượng đó
    Tên hàm hủy cũng giống như tên_Class
    Thường dùng để giải phóng bộ nhớ động cho các thuộc tính/phương thức/đối tượng
    
Khi truy xuất các thuộc tính bên trong cùng 1 class cho hàm tạo, cần dùng 1 con trỏ this và dấu -> hoặc tên trực tiếp của thuộc tính đó

Cú pháp
    tên_hàm_tạo() {
        gán giá trị cho các biến thuộc tính, thường lầ các giá trị \0 hoặc 0;
    }
    
    Có thể có nhiều hàm tạo

    ~tên_hàm_hủy() {
        thông thường sẽ thu hồi bộ nhớ
    }
*/

#include <iostream>
#include <cstring>

using namespace std;

class Student {
public:
    char ID[20];
    char name[100];
    int age;
    float mark;
    char address[100];

    // hàm tạo mặc định
    Student() {
        cout << "Call non a para constructor" << endl;
        this->name[0] = '\0';
        this->address[0] = '\0';
        this->ID[0] = '\0';
        this->age = 0;
        this->mark = 0;
    }

    Student(char *name) {
        cout << "Call 1 para constructor" << endl;
        strncpy(this->name, name, 99);
        this->name[99] = '\0';
        this->address[0] = '\0';
        this->ID[0] = '\0';
        this->age = 0;
        this->mark = 0;
    }

    Student(char *name, int age) {
        cout << "Call 2 para constructor" << endl;
        strncpy(this->name, name, 99);
        this->name[99] = '\0';
        this->address[0] = '\0';
        this->ID[0] = '\0';
        this->age = age;
        this->mark = 0;
    }

    Student(char *name, int age, float mark) {
        cout << "Call 3 para constructor" << endl;
        strncpy(this->name, name, 99);
        this->name[99] = '\0';
        this->address[0] = '\0';
        this->ID[0] = '\0';
        this->age = age;
        this->mark = mark;
    }

    Student(char *name, int age, float mark, char *address) {
        cout << "Call 4 para constructor" << endl;
        strncpy(this->name, name, 99);
        this->name[99] = '\0';
        strncpy(this->address, address, 99);
        this->address[99] = '\0';
        this->ID[0] = '\0';
        this->age = age;
        this->mark = mark;
    }

    Student(char *name, int age, float mark, char *address, char *ID) {
        cout << "Call 5 para constructor" << endl;
        strncpy(this->name, name, 99);
        this->name[99] = '\0';
        strncpy(this->address, address, 99);
        this->address[99] = '\0';
        strncpy(this->ID, ID, 19);
        this->ID[19] = '\0';
        this->age = age;
        this->mark = mark;
    }

    void showInfo() {
        cout << "============SHOW INFO==============" << endl;
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Mark: " << mark << endl;
        cout << "Address: " << address << endl;
        cout << "==================================" << endl;
    }

    // hàm hủy
    ~Student() {
        cout << "Call destructor" << endl;
    }
};

int main() {
    char *name = new char[100];
    strncpy(name, "Ngo Thanh Tan" , 99); // nhập chuỗi vào mảng động

    char *id = new char[20];
    strncpy(id, "0123456789", 19);

    char *addr = new char[100];
    strncpy(addr, "zcgdgs" , 99);

    // khởi tạo đối tượng
    Student s;

    Student s1(name);
    Student s2(name, 20);
    Student s3(name, 21, 7, addr, id);

    // gọi phương thức
    s.showInfo();
    s1.showInfo();
    s2.showInfo();
    s3.showInfo();

    return 0;
}