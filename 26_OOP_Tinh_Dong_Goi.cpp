/*
Tất cả thông tin cùng các hành động của đối tượng được gói gọn lại trong 1 class
thường các thuộc tính sẽ là private
các phương thức sẽ là public

Có 2 cách để viết 1 phương thức:
    C1: Viết kiểu tường minh, được xây dựng bên trong class
        tên_phương_thức(parameter) {
            do something
        }
    
    C2: Phương thức được khai báo trong class, bên ngoài class thực hiện xây dựng phương thức đó
    tên_class {
    public:
        tên_phương_thức(type_data/poiter no_name_variable);
    }
    tên_class:: tên_phương_thức(type_data/poiter name_variable) {
        do something
    }

    Nếu hàm có kiểu thì đặt kiểu trước class rồi mới xây dựng phương thức bên ngoài class

Private:
    các thuộc tính có phương thức private không thể được truy cập bên ngoài class để làm thay đổi/lấy giá trị của từng thuộc tính

Public:
    cho phép truy cập đến các phương thức bên ngoài class

    nếu muốn thay đổi giá trị cho 1 thuộc tính cụ thể nào đó đã là private thì cần xây dựng hàm set để thay đổi

    nếu muốn lấy giá trị của 1 thuộc tính cụ thể nào đó đã là private thì cần xây dựng hàm get để lấy giá trị
*/

#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char ID[20];
    char name[100];
    int age;
    float mark;
    char address[100];

public:
    // hàm tạo mặc định
    Student();

    Student(char *name) {
        cout << "Call 1 para constructor" << endl;
        strncpy(this->name, name, 99);
        this->name[99] = '\0';
        this -> address[0] = '\0';
        this -> ID[0] = '\0';
        this -> age = 0;
        this -> mark = 0;
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

    Student(char *, int, float, char *, char *);

    void showInfo();

    void setID(char *);
    void setName(char *);
    void setAddress(char *);
    void setAge(int);
    void setMark(float);

    int getAge();
    float getMark();
    char* getName();
    char* getAddress();
    char* getID();

    ~Student() {
        cout << "Call destructor" << endl;
    }
};

Student::Student() {
        cout << "Call non a para constructor" << endl;
        this -> name[0] = '\0';
        this -> address[0] = '\0';
        this -> ID[0] = '\0';
        this -> age = 0;
        this -> mark = 0;
}

Student::Student(char *name, int age, float mark, char *address, char *ID) {
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

void Student::showInfo() {
        cout << "============SHOW INFO==============" << endl;
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Mark: " << mark << endl;
        cout << "Address: " << address << endl;
        cout << "==================================" << endl;
}

void Student::setID(char *id){
    strncpy(this->ID, id, 19);
    this->ID[19] = '\0';
}

void Student::setName(char *name){
    strncpy(this->name, name, 99);
    this->name[99] = '\0';
}

void Student::setAddress(char *addr){
        strncpy(this->address, addr, 99);
        this->address[99] = '\0';
}

void Student::setAge(int age){
    this->age = age;
}

void Student::setMark(float mark){
    this->mark = mark;
}

int Student::getAge(){
 return this->age;
}

float Student::getMark(){
    return this->mark;
}

char* Student::getName(){
    return this->name;
}

char* Student::getAddress(){
    return this->address;
}

char* Student::getID(){
    return this->ID;
}

int main() {
    char *name = new char[100];
    strncpy(name, "Ngo Thanh Tan" , 99); // nhập chuỗi vào mảng động

    char *id = new char[20];
    strncpy(id, "0123456789", 19);

    char *addr = new char[100];
    strncpy(addr, "zcgdgs" , 99);

    // khởi tạo đối tượng
    Student s;

    s.setAge(20);
    s.setName(name);
    s.setAddress(addr);
    s.setMark(7);
    s.setID(id);

    cout << "Ten: " << s.getName() << endl;
    cout << "Tuoi: " << s.getAge() << endl;

    s.showInfo();

    return 0;
}