#include "../service/service.cpp"

//////////////////////////////////// STUDENT \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class StudentController
class StudentController
{
private:
    StudentServiceImpl studentService;

public:
    int addStudent(Student student)
    {
        return studentService.addStudent(student);
    }
};

//////////////////////////////////// COURSE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class CourseController
class CourseController
{
private:
    CourseServiceImpl courseService;

public:
    int addCourse(Course course)
    {
        return courseService.addCourse(course);
    }
};

//////////////////////////////////// TEACHER \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class TeacherController
class TeacherController
{
private:
    TeacherServiceImpl teacherService;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherService.addTeacher(teacher);
    }
};
