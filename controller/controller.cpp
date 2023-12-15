#include "../service/service.cpp"

//////////////////////////////////// STUDENT \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class StudentController
class StudentController
{
private:
    StudentServiceImpl studentService;
    Student student;

public:
    // Method add Student
    int addStudent(Student student)
    {
        return studentService.addStudent(student);
    }

    // Method show Student by ID
    void showStudentById(int id)
    {
        student = studentService.getStudentById(id);
        if (student.getId() != -1)
        {
            cout << "\t\tId \t\t Name \t\t Age \t\t Phone Number \t\t GPA" << endl;
            cout << "\t\t" << student.getId() << "\t\t" << student.getName() << "\t\t" << student.getAge() << "\t\t" << student.getPhoneNumber() << "\t\t" << student.getGpa() << endl;
        }
    }
};

//////////////////////////////////// COURSE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class CourseController
class CourseController
{
private:
    CourseServiceImpl courseService;
    Course course;

public:
    // Method add Course
    int addCourse(Course course)
    {
        return courseService.addCourse(course);
    }

    // Method show Course by ID
    void showCourseById(int id)
    {
        course = courseService.getCourseById(id);
        if (course.getId() != -1)
        {
            cout << "\t\tId \t\t Name \t\t Hour" << endl;
            cout << "\t\t" << course.getId() << "\t\t" << course.getName() << "\t\t" << course.getHour() << endl;
        }
    }
};

//////////////////////////////////// TEACHER \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class TeacherController
class TeacherController
{
private:
    TeacherServiceImpl teacherService;
    Teacher teacher;

public:
    // Method add Teacher
    int addTeacher(Teacher teacher)
    {
        return teacherService.addTeacher(teacher);
    }

    // Method show Teacher by ID
    void showTeacherById(int id)
    {
        teacher = teacherService.getTeacherById(id);
        if (teacher.getId() != -1)
        {
            cout << "\t\tId \t\t Name \t\t Age \t\t Phone Number \t\t Salary" << endl;
            cout << "\t\t" << teacher.getId() << "\t\t" << teacher.getName() << "\t\t" << teacher.getAge() << "\t\t" << teacher.getPhoneNumber() << "\t\t" << teacher.getSalary() << endl;
        }
    }
};
