/*
Tính đa hình - Polymorphism

Sẽ cùng 1 phương thức ở Class_base, nhưng sẽ có thể nhiều hình thái, nhiệm vụ khác nhau ở các lớp dẫn xuất (có thể hiểu là từ method trong class_base có thể ghi đè method đó trong class_dẫn_xuất)

Thường class_dẫn_xuất cần phải kế thừa (:) class_base trước rồi mới có thể dùng tính đa hình từ class_base đó

Làm việc với tính đa hình có liên quan đến con trỏ, vì con trỏ sẽ là class_base, các object được tạo ra từ các cllass_dẫn_xuất.

Object được tạo ra từ class_dẫn_xuất sẽ truy xuất đến các phương thức của class_base chứ không phải class_dẫn_xuất

Để Object được tạo ra từ class_dẫn_xuất truy xuất đến các phương thức của class_dẫn_xuất chứ không phải class_base thì trước method trong class_dẫn_xuất thực hiện thêm từ khóa virtual
*/