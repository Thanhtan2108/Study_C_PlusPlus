/*
Tính kế thừa - Inheritance

Nếu nhiều Class có các đặc điểm chung thì có thể nhóm các đặc điểm này thành 1 Class_base để các Class_dẫn_xuất có thể kế thừa lại các đặc điểm của Class base

Muốn class_dẫn_xuất kế thừa lại các Class base, cú pháp:
    class class_dẫn_xuất : public/private tên_Class_base { // : extens
    
    };

Lựa chọn kiểu kế thừa từ Class_base
    Nếu là private thì các thuộc tính/phương thức của Class_base sẽ được class_dẫn_xuất kế thừa theo kiểu private, mặc dù các thuộc tính/phương thức này trong Class_base là public

    Nếu là public thì các thuộc tính/phương thức của Class_base sẽ được class_dẫn_xuất kế thừa theo kiểu public

    * Thường dùng là kế thừa public

class_dẫn_xuất sẽ kế thừa lại toàn bộ các thuộc tính/phương thức của Class_base

*Riêng các hàm constructor/hoặc các hàm mặc định có sẵn từ trong Class_base thì cần phải định nghĩa lại các hàm constructor/hoặc các hàm mặc định có sẵn trong class_dẫn_xuất

Sau khi class_dẫn_xuất kế thừa Class_base, có thể dùng lại các phương thức/thuộc tính public của Class_base, có thể phát triển các phương thức mới chỉ có riêng dành cho class_dẫn_xuất đó mà Class_base và các Class khác không có

Nếu muốn class_dẫn_xuất truy cập vào các thuộc tính private của Class_base thì cần thay đổi private -> protected trong Class_base, nhưng không thể truy cập vào từ bên ngoài Class_base và Class kế thừa Class_base

Có thể kế thừa nhiều Class_base khác nhau
    class tên_class_hiện_tại : public class_base1, public class_base2 {
    
    };

Có thể kế thừa class nhiều mức
*/