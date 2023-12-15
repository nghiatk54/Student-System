#include "../repository/repository.cpp"
#include "../validation/validation.cpp"

//////////////////////////////////// STUDENT \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface StudentService
class StudentService
{
public:
    virtual int addStudent(Student student) = 0;
    virtual Student getStudentById(int id) = 0;
    virtual int editStudent(Student student) = 0;
};

// Create class StudentServiceImpl
class StudentServiceImpl
{
private:
    StudentRepositoryImpl studentRepository;
    StudentValidation studentValidation;
    ServiceValidation serviceValidation;
    Student studentResult;

public:
    // Method check valid Add Student
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

    // Method check valid Get Student by ID
    Student getStudentById(int id)
    {
        studentResult = studentRepository.getStudentById(id);
        if (studentResult.getId() == -1)
        {
            serviceValidation.notExist("Student", id);
        }
        return studentResult;
    }

    // Method check valid edit student
    void editStudent(Student student)
    {
        int index = studentRepository.editStudent(student);
        if (index == -1)
        {
            serviceValidation.notExist("Student", student.getId());
        }
        else
        {
            cout << "Success Edit Student With ID [" << student.getId() << "]" << endl;
        }
    }
};

//////////////////////////////////// COURSE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create interface class CourseService
class CourseService
{
public:
    virtual int addCourse(Course course) = 0;
    virtual Course getCourseById(int id) = 0;
    virtual int editCourse(Course Course) = 0;
};

// Create class CourseServiceImpl
class CourseServiceImpl
{
private:
    CourseRepositoryImpl courseRepository;
    CourseValidation courseValidation;
    ServiceValidation serviceValidation;
    Course courseResult;

public:
    // Method check valid Add Course
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

    // Method check valid get Course By ID
    Course getCourseById(int id)
    {
        courseResult = courseRepository.getCourseById(id);
        if (courseResult.getId() == -1)
        {
            serviceValidation.notExist("Course", id);
        }
        return courseResult;
    }

    // Method check valid edit course
    void editCourse(Course course)
    {
        int index = courseRepository.editCourse(course);
        if (index == -1)
        {
            serviceValidation.notExist("Course", course.getId());
        }
        else
        {
            cout << "Success Edit Course With ID [" << course.getId() << "]" << endl;
        }
    }
};

//////////////////////////////////// TEACHER \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create interface class TeacherService
class TeacherService
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
    virtual Teacher getTeacherById(int id) = 0;
    virtual int editTeacher(Teacher Teacher) = 0;
};

// Create class TeacherServiceImpl
class TeacherServiceImpl
{
private:
    TeacherRepositoryImpl teacherRepository;
    TeacherValidation teacherValidation;
    ServiceValidation serviceValidation;
    Teacher teacherResult;

public:
    // Method check valid add Teacher
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

    // Method check valid get Teacher By ID
    Teacher getTeacherById(int id)
    {
        teacherResult = teacherRepository.getTeacherById(id);
        if (teacherResult.getId() == -1)
        {
            serviceValidation.notExist("Teacher", id);
        }
        return teacherResult;
    }

    // Method check valid edit teacher
    void editTeacher(Teacher teacher)
    {
        int index = teacherRepository.editTeacher(teacher);
        if (index == -1)
        {
            serviceValidation.notExist("Teacher", teacher.getId());
        }
        else
        {
            cout << "Success Edit Teacher With ID [" << teacher.getId() << "]" << endl;
        }
    }
};
