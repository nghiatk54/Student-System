#include "../repository/repository.cpp"
#include "../validation/validation.cpp"

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
    StudentRepositoryImpl studentRepository;
    StudentValidation studentValidation;
    ServiceValidation serviceValidation;

public:
    int addStudent(Student student)
    {
        if (studentValidation.validStudent(student) == 1)
        {
            int id = studentRepository.addStudent(student);
            if (id == -1)
            {
                serviceValidation.fullData("Student");
            }
            else
            {
                return id;
            }
        }
        return -1;
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
    CourseRepositoryImpl courseRepository;
    CourseValidation courseValidation;
    ServiceValidation serviceValidation;

public:
    int addCourse(Course course)
    {
        // Check size Name emtpy and less than 2
        if (courseValidation.validCourse(course) == 1)
        {
            int id = courseRepository.addCourse(course);
            if (id == -1)
            {
                serviceValidation.fullData("Course");
            }
            else
            {
                return id;
            }
        }
        return -1;
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
    TeacherRepositoryImpl teacherRepository;
    TeacherValidation teacherValidation;
    ServiceValidation serviceValidation;

public:
    int addTeacher(Teacher teacher)
    {
        if (teacherValidation.validTeacher(teacher) == 1)
        {
            int id = teacherRepository.addTeacher(teacher);
            if (id == -1)
            {
                serviceValidation.fullData("Teacher");
            }
            else
            {
                return id;
            }
        }
        return -1;
    }
};