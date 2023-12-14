# Student-System

OOP C++ Project

1. File models.cpp chứa các class thông tin của đối tượng Student, Teacher, Course và thể hiện mối quan hệ giữa các đối tượng này.

2. Filfe validation.cpp chứa các class Validation Student, Course, Teacher để kiểm tra điều kiện của dữ liệu người dùng nhập của thoả mãn hay không.

3. File repository.cpp chứa tập hợp dữ liệu của Student, Teacher, Course giống như 1 Database.

4. File service.cpp kiểm tra các điều kiện dữ liệu người dùng nhập vào có đúng hay không?

-   Nếu đúng thì chuyển đến repository.
-   Nếu sai thì in ra điều kiện sai và chuyển về controller

5. Luồng dữ liệu chạy:
   user input --> models --> controller --> service --> repository
