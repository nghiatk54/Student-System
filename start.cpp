#include <iostream>
#include "./controller/controller.cpp"
using namespace std;

// Declare process user
int process;
// Declare id of object student, course, teacher
int id;
// Declare function display system
void displaySystem();

// Declare function show List
void showList(string value);

// Declare function Add Student
void addStudent();

// Declare function Add Course
void addCourse();

// Declare function Add Teacher
void addTeacher();

// Declare Function Switch Student
void switchStudent();

// Declare Function Switch Course
void switchCourse();

// Declare Function Switch Teacher
void switchTeacher();

// Declare Function show student by id
void showStudentById();

// Declare Function show teacher by id
void showTeacherById();

// Declare Function show Course by id
void showCourseById();

// Declare Function edit student
void editStudent();

// Declare Function edit course
void editCourse();

// Declare Function edit teacher
void editTeacher();

// ************************************************************************ MAIN PROGRAM ************************************************************************
int main()
{
    int flag = 0;
    while (true)
    {
        displaySystem(); // Display system program
        cin >> process;
        // Check process user
        switch (process)
        {
        case 1:
            showList("Student"); // Show list Student
            cin >> process;
            // Check process Student user
            switchStudent();
            break;
        case 2:
            showList("Course"); // Show list Course
            cin >> process;
            // Check process Course user
            switchCourse();
            break;
        case 3:
            showList("Teacher"); // Show list Teacher
            cin >> process;
            // Check process Teacher user
            switchTeacher();
            break;
        case 4:
            flag = 1;
            break;
        default:
            cout << "Invalid Choose" << endl;
        }
        if (flag == 1)
        {
            break;
        }
    }
}

// Function display system
void displaySystem()
{
    cout << "\t\t\t*********** Management System ***********" << endl;
    cout << "Please Enter Your Process you need to do!" << endl;
    cout << "1 - About Students"
         << "\t\t"
         << "2 - About Courses" << endl;
    cout << "3 - About Teachers"
         << "\t\t"
         << "4 - Exit" << endl;
}

// Function show list by value
void showList(string value)
{
    cout << "\t\t\t*********** " << value << " Management System ***********" << endl;
    cout << "1 - Add " << value
         << "\t\t"
         << "2 - Remove " << value << endl;
    cout << "3 - Edit " << value
         << "\t"
         << "4 - Show " << value << endl;
    cout << "5 - Show " << value << "By ID"
         << "\t"
         << "6 - Exit" << endl;
}

// Function Add Student
void addStudent()
{
    cout << "Please Enter Student Data: " << endl;
    Student student;
    cout << "Enter Student Name: ";
    string name;
    cin >> name;
    student.setName(name);
    cout << "Enter Student Age: ";
    int age;
    cin >> age;
    student.setAge(age);
    cout << "Enter Student Phone Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    student.setPhoneNumber(phoneNumber);
    cout << "Enter Student GPA: ";
    double gpa;
    cin >> gpa;
    student.setGpa(gpa);
    StudentController studentController;
    id = studentController.addStudent(student);
    if (id != -1)
    {
        cout << "Success Added Student With Id [" << id << "]" << endl;
    }
}

// Function Add Course
void addCourse()
{
    cout << "Please Enter Course Data: " << endl;
    Course course;
    cout << "Enter Course Name: ";
    string name;
    cin >> name;
    course.setName(name);
    cout << "Enter Course Hour: ";
    double hour;
    cin >> hour;
    course.setHour(hour);
    CourseController courseController;
    id = courseController.addCourse(course);
    if (id != -1)
    {
        cout << "Success Added With Course Id [" << id << "]" << endl;
    }
}

// Function Add Teacher
void addTeacher()
{
    cout << "Please Enter Teacher Data: " << endl;
    Teacher teacher;
    cout << "Enter Teacher Name: ";
    string name;
    cin >> name;
    teacher.setName(name);
    cout << "Enter Teacher Age: ";
    int age;
    cin >> age;
    teacher.setAge(age);
    cout << "Enter Teacher Phone Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    teacher.setPhoneNumber(phoneNumber);
    cout << "Enter Teacher salary: ";
    double salary;
    cin >> salary;
    teacher.setSalary(salary);
    TeacherController teacherController;
    id = teacherController.addTeacher(teacher);
    if (id != -1)
    {
        cout << "Success Added Teacher With Id [" << id << "]" << endl;
    }
}

// Function Switch Student
void switchStudent()
{
    // Check process Student user
    switch (process)
    {
    case 1:
        addStudent();
        break;
    case 2:
        cout << "Remove Student" << endl;
        break;
    case 3:
        editStudent();
        break;
    case 4:
        cout << "Show Student" << endl;
        break;
    case 5:
        showStudentById();
        break;
    case 6:
        break;
    default:
        cout << "Invalid Choose" << endl;
    }
}

// Function Switch Course
void switchCourse()
{
    // Check process Course user
    switch (process)
    {
    case 1:
        addCourse();
        break;
    case 2:
        cout << "Remove Course" << endl;
        break;
    case 3:
        editCourse();
        break;
    case 4:
        cout << "Show Course" << endl;
        break;
    case 5:
        showCourseById();
        break;
    case 6:
        break;
    default:
        cout << "Invalid Choose" << endl;
    }
}

// Function Switch Teacher
void switchTeacher()
{
    // Check process Teacher user
    switch (process)
    {
    case 1:
        addTeacher();
        break;
    case 2:
        cout << "Remove Teacher" << endl;
        break;
    case 3:
        editTeacher();
        break;
    case 4:
        cout << "Show Teacher" << endl;
        break;
    case 5:
        showTeacherById();
        break;
    case 6:
        break;
    default:
        cout << "Invalid Choose" << endl;
    }
}

// Function show student by id
void showStudentById()
{
    cout << "Enter Student Id : ";
    cin >> id;
    StudentController studentController;
    studentController.showStudentById(id);
}

// Function show course by id
void showCourseById()
{
    cout << "Enter Course Id : ";
    cin >> id;
    CourseController courseController;
    courseController.showCourseById(id);
}

// Function show teacher by id
void showTeacherById()
{
    cout << "Enter Teacher Id : ";
    cin >> id;
    TeacherController teacherController;
    teacherController.showTeacherById(id);
}

// Function edit student
void editStudent()
{
    cout << "Please Enter Student Data: " << endl;
    Student student;
    cout << "Enter Student Id: ";
    cin >> id;
    student.setId(id);
    cout << "Enter Student Name: ";
    string name;
    cin >> name;
    student.setName(name);
    cout << "Enter Student Age: ";
    int age;
    cin >> age;
    student.setAge(age);
    cout << "Enter Student Phone Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    student.setPhoneNumber(phoneNumber);
    cout << "Enter Student GPA: ";
    double gpa;
    cin >> gpa;
    student.setGpa(gpa);
    StudentController studentController;
    studentController.updateStudent(student);
}

// Function edit course
void editCourse()
{
    cout << "Please Enter Course Data: " << endl;
    Course course;
    cout << "Enter Course ID: ";
    cin >> id;
    course.setId(id);
    cout << "Enter Course Name: ";
    string name;
    cin >> name;
    course.setName(name);
    cout << "Enter Course Hour: ";
    double hour;
    cin >> hour;
    course.setHour(hour);
    CourseController courseController;
    courseController.updateCourse(course);
}

// Function edit teacher
void editTeacher()
{
    cout << "Please Enter Teacher Data: " << endl;
    Teacher teacher;
    cout << "Enter Teacher ID: ";
    cin >> id;
    teacher.setId(id);
    cout << "Enter Teacher Name: ";
    string name;
    cin >> name;
    teacher.setName(name);
    cout << "Enter Teacher Age: ";
    int age;
    cin >> age;
    teacher.setAge(age);
    cout << "Enter Teacher Phone Number: ";
    string phoneNumber;
    cin >> phoneNumber;
    teacher.setPhoneNumber(phoneNumber);
    cout << "Enter Teacher salary: ";
    double salary;
    cin >> salary;
    teacher.setSalary(salary);
    TeacherController teacherController;
    teacherController.updateTeacher(teacher);
}