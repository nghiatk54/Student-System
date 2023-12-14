#include <iostream>
#include "./controller/controller.cpp"
using namespace std;

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

int process;
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
            switch (process)
            {
            case 1:
                addStudent();
                break;
            case 2:
                cout << "Remove Student" << endl;
                break;
            case 3:
                cout << "Edit Student" << endl;
                break;
            case 4:
                cout << "Show Student" << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid Choose" << endl;
            }
            break;
        case 2:
            showList("Course"); // Show list Course
            cin >> process;
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
                cout << "Edit Course" << endl;
                break;
            case 4:
                cout << "Show Course" << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid Choose" << endl;
            }
            break;
        case 3:
            showList("Teacher"); // Show list Teacher
            cin >> process;
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
                cout << "Edit Teacher" << endl;
                break;
            case 4:
                cout << "Show Teacher" << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid Choose" << endl;
            }
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

// Declare function display system
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
    cout << "5 - Exit" << endl;
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
    int id = studentController.addStudent(student);
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
    int id = courseController.addCourse(course);
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
    int id = teacherController.addTeacher(teacher);
    if (id != -1)
    {
        cout << "Success Added Teacher With Id [" << id << "]" << endl;
    }
}