/*
Trong 1 struct, đa phần các thông tin được biểu diễn dưới dạng thông tin
để thể hiện các hành động của 1 đối tượng, cần phát triển struct lên thành class

Cú pháp tạo class
    class Tên_class {
        thông tin của đối tượng (các biến);
        các hành động tương ứng của đối tượng (các hàm);
    };
    
    Tên_class thường là Danh từ hoặc cụm danh từ, được viết hoa các chữ cái đầu
    các thông tin của đối tượng (các biến) đgl thuộc tính của đối tượng
    các hành động của đối tượng (các hàm) đgl phương thức của đối tượng

Cú pháp truy cập đến thành phần trong class, tương tự như struct, dùng dấu " . " để truy cập

Khác với struct có các thành phần có thể truy cập public từ bên ngoài
thì các thành phần trong class phải được chỉ định là public thì mới được truy cập vào từ bên ngoài
nếu không chỉ định thì các thành phần bên trong class sẽ là private và chỉ được truy cập bên trong class đó

Tạo Object (đối tượng) được sinh ra từ class, class là kiểu dữ liệu do người dùng tự định nghĩa
*/

#include <iostream>

using namespace std;

class Student {
public: 
    // các thuộc tính
    char ID[20];
    char name[100];
    int age;
    float mark;
    char address[100];

    // các phương thức
    void showIdCard() {

    }

    void study(char *subject) {

    }

    void doExample(char *subjName) {

    }

    void payFee(float amount) {

    }
};

struct Cat {
    //các thuộc tính
    char name[100];
    int age;
    float weight;
    char color[100];
    char eyesColor[100];

    //các phương thức
    void move() {

    }

    void sleep() {

    }

    void eat() {

    }
};


int main() {
    // tạo object
    Student s1;

    // truy cập
    s1.mark = 8.5;
    s1.age = 21;

    cout << "Age: " << s1.age << endl;
    cout << "Mark: " << s1.mark << endl;
    
    Cat cat;

    // cat.name; // báo lỗi ngay vì name là private

    return 0;
}
