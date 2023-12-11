#include "../service/service.cpp"

// Create class StudentController
class StudentController
{
private:
    StudentService studentService;

public:
    int addStudent(Student student)
    {
        return studentService.addStudent(student);
    }
};

// Create class CourseController
class CourseController
{
private:
    CourseService courseService;

public:
    int addCourse(Course course)
    {
        return courseService.addCourse(course);
    }
};

// Create class TeacherController
class TeacherController
{
private:
    TeacherService teacherService;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherService.addTeacher(teacher);
    }
};
