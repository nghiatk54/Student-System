#include "../repository/repository.cpp"

// Create class Student Service
class StudentService
{
public:
    virtual int addStudent(Student student) = 0;
};

class StudentServiceImpl
{
private:
    StudentRepository studentRepository;

public:
    int addStudent(Student student)
    {
        return studentRepository.addStudent(student);
    }
};

// Create class Course Service
class CourseService
{
public:
    virtual int addCourse(Course course) = 0;
};

class CourseServiceImpl
{
private:
    CourseRepository courseRepository;

public:
    int addCourse(Course course)
    {
        return courseRepository.addCourse(course);
    }
};

// Create class Teacher Service
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};

class TeacherServiceImpl
{
private:
    TeacherRepository teacherRepository;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherRepository.addTeacher(teacher);
    }
};