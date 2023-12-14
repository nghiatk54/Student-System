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
    StudentRepositoryImpl studentRepository;

public:
    int addStudent(Student student)
    {
        if (student.getName().size() == 0 || student.getName().size() > 7 || student.getName().size() < 2) // Check name is empty and greater 7 and less 2 char
        {
            cout << "Invalid Name!" << endl;
        }
        else if (student.getAge() >= 30 || student.getAge() <= 18) // Check Age greater 30 and less 18
        {
            cout << "Invalid Age!" << endl;
        }
        // Check phone number size 10 and first number = 0 and second + third number
        else if (student.getPhoneNumber()[0] != '0' || student.getPhoneNumber().size() != 10 || ((student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '7') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '9') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('5' + '9') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '2') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('5' + '2') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('5' + '6') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('5' + '8') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('7' + '0') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('7' + '9') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('7' + '7') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('7' + '6') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('7' + '8') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '9') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '0') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '3') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '6') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '6') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '7') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '8') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '2') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '3') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '4') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '5') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '6') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '7') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '8') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('3' + '9') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '1') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('9' + '4') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '8') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '3') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '4') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '5') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '1') && (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('8' + '2')))
        {
            cout << "Invalid Phone Number" << endl;
        }
        else if (student.getGpa() > 10 || student.getGpa() < 0) // Check GPA between 0 - 10
        {
            cout << "Invalid GPA" << endl;
        }
        else
        {
            return studentRepository.addStudent(student);
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
    TeacherRepositoryImpl teacherRepository;

public:
    int addTeacher(Teacher teacher)
    {
        return teacherRepository.addTeacher(teacher);
    }
};