/*
là kiểu dữ liệu người dùng tự định nghĩa
bao gồm nhiều nhiểu dữ liệu nguyên thủy để biểu diễn thông tin phức tạp của 1 đối tượng nào đó

Cú pháp:
struct tên_struct {
    các kiểu dữ liệu tên biến;
};

Nếu làm việc với các đối tượng bình thường thì truy xuất đến các thuộc tính trong struct bằng dấu " . "

Nếu làm việc với các đối tượng bình thường thì truy xuất đến các thuộc tính trong struct bằng dấu " -> "
*/

#include <iostream>

using namespace std;

typedef struct {
    char owner[100];
    char brand[100];
    char color[100];
    int weight;
    int high;
    int width;
} Car;

struct Cat {
    char name[100];
    int age;
    float weight;
    char color[100];
    char eyesColor[100];
};

struct Student {
    char ID[20];
    char name[100];
    int age;
    float mark;
    char address[100];
    Car car;
    Cat cat;
};

void getInfo(Student &s){ // &s : lấy địa chỉ của biến s tương đương 1 con trỏ, cho phép thay đổi giá trị sau khi hàm thực hiện xong
    cout << "Enter name: ";
    cin.getline(s.name, 99);

    cout << "Enter age: ";
    cin >> s.age;

    cout << "Enter address: ";
    cin.ignore();
    cin.getline(s.address, 99);

    cout << "Enter mark: ";
    cin >> s.mark;
    cin.ignore();

    cout << "Enter color car: ";
    cin >> s.car.color;
    cin.ignore();
}

void showInfo(Student s) {
    cout << "===============Student Info==========" << endl;
    cout << "name: " << s.name << endl;
    cout << "Age: " << s.name << endl;
    cout << "Address: " << s.address << endl;
    cout << "Mark: " << s.mark << endl;
    cout << "Car color: " << s.car.color << endl;
    cout << "=====================================" << endl;
}

void getInfo2(Student *s){ // &s : lấy địa chỉ của biến s tương đương 1 con trỏ, cho phép thay đổi giá trị sau khi hàm thực hiện xong
    cout << "Enter name: ";
    cin.getline(s->name, 99);

    cout << "Enter age: ";
    cin >> s->age;

    cout << "Enter address: ";
    cin.ignore();
    cin.getline(s->address, 99);

    cout << "Enter mark: ";
    cin >> s->mark;
    cin.ignore();

    cout << "Enter color car: ";
    cin >> s->car.color;
    cin.ignore();
}

void showInfo2(Student *s) {
    cout << "===============Student Info==========" << endl;
    cout << "name: " << (*s).name << endl;//C1
    cout << "Age: " << (*s).name << endl;
    cout << "Address: " << s->address << endl;//C2
    cout << "Mark: " << s->mark << endl;
    cout << "Car color: " << s->car.color << endl;
    cout << "=====================================" << endl;
}

int main() {
    Student s;
    // Student *sPtr;
    // sPtr = &s;
    Student *sPtr = new Student();

    getInfo(s);
    showInfo(s);

    getInfo2(sPtr);
    showInfo2(sPtr);

    delete sPtr;

    return 0;
}