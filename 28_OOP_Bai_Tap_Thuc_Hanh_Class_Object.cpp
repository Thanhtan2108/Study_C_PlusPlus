/*
Ex 8.1. Lớp Person gồm các thông tin: mã là số nguyên tự tăng từ 100, họ, đệm, tên, tuổi, giới tính, địa chỉ, số điện thoại.
Yêu cầu:
1) Khai báo class Person với các thông tin private.
2) Viết hàm tạo mặc định khởi tạo các giá trị ban đầu.
3) Viết hàm tạo đầy đủ tham số và gán qua phương thức set.
4) Viết các cặp phương thức get/set cho từng thuộc tính.
5) Viết phương thức showInfo() hiển thị thông tin của đối tượng Person.
6) Viết phương thức fullName() trả về đầy đủ họ tên.
7) Lập danh sách các Person, thêm các Person vào danh sách.
8) Hiển thị danh sách các Person đã tạo.

Mở rộng (yêu cầu 9, 10, 11):
9) Nhập liệu từ người dùng: Thêm chức năng cho phép người dùng nhập thông tin để tạo và thêm đối tượng Person vào danh sách.
10) Tìm kiếm và quản lý: Thêm các phương thức để tìm kiếm (theo ID hoặc tên), xóa, hoặc chỉnh sửa Person trong danh sách.
11) Kiểm tra nâng cao: Thêm kiểm tra phức tạp hơn cho phoneNumber (ví dụ: định dạng số điện thoại Việt Nam - bắt đầu bằng 0, 10-11 số, chỉ chứa số).
*/

#include <iostream>
#include <string>
#include <vector>
#include <regex> // Để kiểm tra định dạng phoneNumber nâng cao

using namespace std;

// 1) Khai báo class Person
class Person {
private:
    static int id; // Biến static để tạo mã số tự tăng từ 100
    int pId;       // Mã số cá nhân của mỗi Person
    int age;
    string firstName;
    string lastName;
    string midName;
    string address;
    string phoneNumber;
    string gender;

public:
    // 2) Hàm tạo mặc định
    Person();
    // 3) Hàm tạo có tham số
    Person(int age, string firstName, string lastName, string midName, string gender, string address, string phoneNumber);
    // 4) Phương thức static để truy cập id
    static int getCurrentId();
    // 4) Các phương thức get
    int getAge() const;
    int getId() const;
    string getFirstName() const;
    string getMidName() const;
    string getLastName() const;
    string getAddress() const;
    string getGender() const;
    string getPhoneNumber() const;
    // 4) Các phương thức set
    void setAge(int);
    void setId(int);
    void setFirstName(const string&);
    void setMidName(const string&);
    void setLastName(const string&);
    void setAddress(const string&);
    void setGender(const string&);
    void setPhoneNumber(const string&);
    // 5) Hiển thị thông tin
    void showInfo() const;
    // 6) Trả về họ tên đầy đủ
    string fullName() const;
};

// 1) Khởi tạo biến static id
int Person::id = 100;

// 2) Hàm tạo mặc định
Person::Person() {
    this->pId = Person::id++; // Tự động tăng id
    this->age = 0;
    this->firstName = "";
    this->lastName = "";
    this->midName = "";
    this->address = "";
    this->phoneNumber = "";
    this->gender = "";
}

// 3) Hàm tạo có tham số
Person::Person(int age, string firstName, string midName, string lastName, string gender, string address, string phoneNumber) {
    this->pId = Person::id++; // Tự động tăng id
    setAge(age);
    setFirstName(firstName);
    setLastName(lastName);
    setMidName(midName);
    setGender(gender);
    setAddress(address);
    setPhoneNumber(phoneNumber);
}

// 4) Phương thức static để truy cập id
int Person::getCurrentId() {
    return id;
}

// 4) Các phương thức set
void Person::setAge(int age) {
    this->age = (age >= 0) ? age : 0;
}

void Person::setId(int id) {
    this->pId = (id >= 100) ? id : Person::id++;
}

void Person::setFirstName(const string& firstName) {
    this->firstName = firstName;
}

void Person::setMidName(const string& midName) {
    this->midName = midName;
}

void Person::setLastName(const string& lastName) {
    this->lastName = lastName;
}

void Person::setAddress(const string& address) {
    this->address = address;
}

void Person::setGender(const string& gender) {
    this->gender = (gender == "Male" || gender == "Female") ? gender : "Unknown";
}

void Person::setPhoneNumber(const string& phoneNumber) {
    // 11) Kiểm tra nâng cao: Số điện thoại Việt Nam - bắt đầu bằng 0, 10-11 số, chỉ chứa số
    regex vnPhoneRegex("^0[0-9]{9,10}$");
    this->phoneNumber = (regex_match(phoneNumber, vnPhoneRegex)) ? phoneNumber : "Unknown";
}

// 4) Các phương thức get
int Person::getAge() const {
    return this->age;
}

int Person::getId() const {
    return this->pId;
}

string Person::getFirstName() const {
    return this->firstName;
}

string Person::getMidName() const {
    return this->midName;
}

string Person::getLastName() const {
    return this->lastName;
}

string Person::getAddress() const {
    return this->address;
}

string Person::getGender() const {
    return this->gender;
}

string Person::getPhoneNumber() const {
    return this->phoneNumber;
}

// 5) Hiển thị thông tin
void Person::showInfo() const {
    cout << "ID: " << pId << "\n"
         << "Full Name: " << fullName() << "\n"
         << "Gender: " << gender << "\n"
         << "Age: " << age << " years old\n"
         << "Address: " << address << "\n"
         << "Phone Number: " << phoneNumber << "\n"
         << "============================================" << endl;
}

// 6) Trả về họ tên đầy đủ
string Person::fullName() const {
    string full = firstName;
    if (!midName.empty()) full += " " + midName;
    if (!lastName.empty()) full += " " + lastName;
    return full;
}

// 10) Hàm tìm kiếm Person theo ID
int findPersonById(const vector<Person>& personList, int id) {
    for (size_t i = 0; i < personList.size(); ++i) {
        if (personList[i].getId() == id) {
            return static_cast<int>(i);
        }
    }
    return -1; // Không tìm thấy
}

// 10) Hàm tìm kiếm Person theo tên (tìm trong fullName)
int findPersonByName(const vector<Person>& personList, const string& name) {
    for (size_t i = 0; i < personList.size(); ++i) {
        if (personList[i].fullName().find(name) != string::npos) {
            return static_cast<int>(i);
        }
    }
    return -1; // Không tìm thấy
}

// 9) Hàm nhập thông tin Person từ người dùng
Person inputPerson() {
    int age;
    string firstName, lastName, midName, gender, address, phoneNumber;

    cout << "Nhap thong tin Person:\n";
    cout << "Tuoi: ";
    cin >> age;
    cin.ignore(); // Xóa bộ đệm để đọc chuỗi

    cout << "Ho: ";
    getline(cin, firstName);

    cout << "Ten dem: ";
    getline(cin, midName);

    cout << "Ten: ";
    getline(cin, lastName);

    cout << "Gioi tinh (Male/Female): ";
    getline(cin, gender);

    cout << "Dia chi: ";
    getline(cin, address);

    cout << "So dien thoai (bat dau bang 0, 10-11 so): ";
    getline(cin, phoneNumber);

    return Person(age, firstName, lastName, midName, gender, address, phoneNumber);
}

// 10) Hàm chỉnh sửa Person
void editPerson(Person& person) {
    cout << "Chinh sua thong tin Person (de trong neu khong thay doi):\n";

    string input;
    int age;

    cout << "Tuoi moi (" << person.getAge() << "): ";
    cin >> age;
    if (age > 0) person.setAge(age);
    cin.ignore();

    cout << "Ho moi (" << person.getFirstName() << "): ";
    getline(cin, input);
    if (!input.empty()) person.setFirstName(input);

    cout << "Ten dem moi (" << person.getMidName() << "): ";
    getline(cin, input);
    if (!input.empty()) person.setMidName(input);

    cout << "Ten moi (" << person.getLastName() << "): ";
    getline(cin, input);
    if (!input.empty()) person.setLastName(input);

    cout << "Gioi tinh moi (" << person.getGender() << "): ";
    getline(cin, input);
    if (!input.empty()) person.setGender(input);

    cout << "Dia chi moi (" << person.getAddress() << "): ";
    getline(cin, input);
    if (!input.empty()) person.setAddress(input);

    cout << "So dien thoai moi (" << person.getPhoneNumber() << "): ";
    getline(cin, input);
    if (!input.empty()) person.setPhoneNumber(input);
}

// Hàm hiển thị menu quản lý
void displayMenu() {
    cout << "\nQuan ly danh sach Person:\n";
    cout << "1. Them Person (nhap tu nguoi dung)\n";
    cout << "2. Hien thi danh sach\n";
    cout << "3. Tim kiem theo ID\n";
    cout << "4. Tim kiem theo ten\n";
    cout << "5. Chinh sua Person theo ID\n";
    cout << "6. Xoa Person theo ID\n";
    cout << "0. Thoat\n";
    cout << "Lua chon: ";
}

// Hàm main để kiểm tra và quản lý
int main() {
    vector<Person> personList;

    // 7) Thêm một số Person mẫu ban đầu
    personList.emplace_back(20, "Nguyen", "Van", "A", "Male", "123 Hanoi", "0123456789");
    personList.emplace_back(22, "Tran", "Thi", "B", "Female", "456 HCMC", "0987654321");
    personList.emplace_back(25, "Le", "Van", "C", "Male", "789 Danang", "0912345678");

    int choice;
    do {
        displayMenu();
        cin >> choice;
        cout << "===============================" << endl;
        cin.ignore(); // Xóa bộ đệm

        switch (choice) {
            case 1: { // 9) Thêm Person từ nhập liệu
                Person newPerson = inputPerson();
                personList.push_back(newPerson);
                cout << "Da them Person thanh cong!\n";
                break;
            }
            case 2: { // 8) Hiển thị danh sách
                cout << "Danh sach cac Person:\n";
                for (size_t i = 0; i < personList.size(); ++i) {
                    cout << "Person " << i + 1 << ":\n";
                    personList[i].showInfo();
                }
                break;
            }
            case 3: { // 10) Tìm kiếm theo ID
                int id;
                cout << "Nhap ID can tim: ";
                cin >> id;
                int index = findPersonById(personList, id);
                if (index != -1) {
                    cout << "Tim thay:\n";
                    personList[index].showInfo();
                } else {
                    cout << "Khong tim thay Person voi ID " << id << ".\n";
                }
                break;
            }
            case 4: { // 10) Tìm kiếm theo tên
                string name;
                cout << "Nhap ten can tim: ";
                getline(cin, name);
                int index = findPersonByName(personList, name);
                if (index != -1) {
                    cout << "Tim thay:\n";
                    personList[index].showInfo();
                } else {
                    cout << "Khong tim thay Person voi ten chua \"" << name << "\".\n";
                }
                break;
            }
            case 5: { // 10) Chỉnh sửa theo ID
                int id;
                cout << "Nhap ID can chinh sua: ";
                cin >> id;
                cin.ignore();
                int index = findPersonById(personList, id);
                if (index != -1) {
                    editPerson(personList[index]);
                    cout << "Da chinh sua thanh cong!\n";
                } else {
                    cout << "Khong tim thay Person voi ID " << id << ".\n";
                }
                break;
            }
            case 6: { // 10) Xóa theo ID
                int id;
                cout << "Nhap ID can xoa: ";
                cin >> id;
                int index = findPersonById(personList, id);
                if (index != -1) {
                    personList.erase(personList.begin() + index);
                    cout << "Da xoa thanh cong!\n";
                } else {
                    cout << "Khong tim thay Person voi ID " << id << ".\n";
                }
                break;
            }
            case 0:
                cout << "Thoat chuong trinh.\n";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long thu lai.\n";
        }
    } while (choice != 0);

    // In giá trị id hiện tại (tùy chọn)
    cout << "Current ID counter: " << Person::getCurrentId() << endl;

    return 0;
}
