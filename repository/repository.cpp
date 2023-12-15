#include "../model/models.cpp"
#include <bits/stdc++.h>
using namespace std;

// Create class Data contains data normal static
class Data
{
public:
    static Student students[25];
    static int indexStudent;
    static int idStudent;
    static Course courses[25];
    static int indexCourse;
    static int idCourse;
    static Teacher teachers[25];
    static int indexTeacher;
    static int idTeacher;
};

// Set initial data information
Student Data::students[25];
int Data::indexStudent = 0;
int Data::idStudent = 1;
Course Data::courses[25];
int Data::indexCourse = 0;
int Data::idCourse = 1;
Teacher Data::teachers[25];
int Data::indexTeacher = 0;
int Data::idTeacher = 1;

//////////////////////////////////// STUDENT \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface StudentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student) = 0;
    virtual Student getStudentById(int id) = 0;
    virtual int editStudent(Student student) = 0;
};

// Create class StudentRepositoryImpl
class StudentRepositoryImpl : public StudentRepository
{
private:
    Data data;
    Student invalidStudent;
    int index = -1;

public:
    // Method add student
    int addStudent(Student student)
    {
        if (data.indexStudent == 25)
        {
            return -1;
        }
        else
        {
            student.setId(data.idStudent++);
            data.students[data.indexStudent++] = student;
        }
        return student.getId();
    }

    // Method get student by ID
    Student getStudentById(int id)
    {
        for (int i = 0; i < data.indexStudent; i++)
        {
            if (data.students[i].getId() == id)
            {
                return data.students[i];
            }
        }
        invalidStudent.setId(-1);
        return invalidStudent;
    }

    // Method edit student
    int editStudent(Student student)
    {
        for (int i = 0; i < data.indexStudent; i++)
        {
            if (data.students[i].getId() == student.getId())
            {
                index = i;
                break;
            }
        }
        if (index = -1)
        {
            return -1;
        }
        else
        {
            data.students[index] = student;
            return index;
        }
    }
};

//////////////////////////////////// COURSE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface CourseRepository
class CourseRepository
{
public:
    virtual int addCourse(Course course) = 0;
    virtual Course getCourseById(int id) = 0;
    virtual int editCourse(Course Course) = 0;
};

// Create class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
private:
    Data data;
    Course invalidCourse;
    int index = -1;

public:
    // Method add Course
    int addCourse(Course course)
    {
        if (data.indexCourse == 25)
        {
            return -1;
        }
        else
        {
            course.setId(data.idCourse++);
            data.courses[data.indexCourse++] = course;
        }
        return course.getId();
    }

    // Method get Course by ID
    Course getCourseById(int id)
    {
        for (int i = 0; i < data.indexCourse; i++)
        {
            if (data.courses[i].getId() == id)
            {
                return data.courses[i];
            }
        }
        invalidCourse.setId(-1);
        return invalidCourse;
    }

    // Method edit course
    int editCourse(Course course)
    {
        for (int i = 0; i < data.indexCourse; i++)
        {
            if (data.courses[i].getId() == course.getId())
            {
                index = i;
                break;
            }
        }
        if (index = -1)
        {
            return -1;
        }
        else
        {
            data.courses[index] = course;
            return index;
        }
    }
};

//////////////////////////////////// TEACHER \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface TeacherRepository
class TeacherRepository
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
    virtual Teacher getTeacherById(int id) = 0;
    virtual int editTeacher(Teacher Teacher) = 0;
};

// Create class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
private:
    Data data;
    Teacher invalidTeacher;
    int index = -1;

public:
    // Method add Teacher
    int addTeacher(Teacher teacher)
    {
        if (data.indexTeacher == 25)
        {
            return -1;
        }
        else
        {
            teacher.setId(data.idTeacher++);
            data.teachers[data.indexTeacher++] = teacher;
        }
        return teacher.getId();
    }

    // Method get Teacher by ID
    Teacher getTeacherById(int id)
    {
        for (int i = 0; i < data.indexTeacher; i++)
        {
            if (data.teachers[i].getId() == id)
            {
                return data.teachers[i];
            }
        }
        invalidTeacher.setId(-1);
        return invalidTeacher;
    }

    // Method edit teacher
    int editTeacher(Teacher teacher)
    {
        for (int i = 0; i < data.indexTeacher; i++)
        {
            if (data.teachers[i].getId() == teacher.getId())
            {
                index = i;
                break;
            }
        }
        if (index = -1)
        {
            return -1;
        }
        else
        {
            data.teachers[index] = teacher;
            return index;
        }
    }
};
