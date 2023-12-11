#include "../repository/repository.cpp"

//////////////////////////////////// STUDENT \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface StudentService
class StudentService
{
public:
    virtual int addStudent(Student student) = 0;
};

// Create class StudentServiceImpl
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

//////////////////////////////////// COURSE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create interface class CourseService
class CourseService
{
public:
    virtual int addCourse(Course course) = 0;
};

// Create class CourseServiceImpl
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

//////////////////////////////////// TEACHER \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create interface class TeacherService
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};

// Create class TeacherServiceImpl
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