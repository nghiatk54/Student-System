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
};

// Create class StudentRepositoryImpl
class StudentRepositoryImpl : public StudentRepository
{
private:
    Data data;

public:
    int addStudent(Student student)
    {
        if (data.indexStudent == 25)
        {
            cout << "Full Student" << '\n';
        }
        else
        {
            student.setId(data.idStudent++);
            data.students[data.indexStudent++] = student;
        }
        return student.getId();
    }
};

//////////////////////////////////// COURSE \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface CourseRepository
class CourseRepository
{
public:
    virtual int addCourse(Course course) = 0;
};

// Create class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
private:
    Data data;

public:
    int addCourse(Course course)
    {
        if (data.indexCourse == 25)
        {
            cout << "Full Course" << '\n';
        }
        else
        {
            course.setId(data.idCourse++);
            data.courses[data.indexCourse++] = course;
        }
        return course.getId();
    }
};

//////////////////////////////////// TEACHER \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface TeacherRepository
class TeacherRepository
{
public:
    virtual int addTeacher(Teacher teacher) = 0;
};

// Create class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
private:
    Data data;

public:
    int addTeacher(Teacher teacher)
    {
        if (data.indexTeacher == 25)
        {
            cout << "Full Teacher" << '\n';
        }
        else
        {
            teacher.setId(data.idTeacher++);
            data.teachers[data.indexTeacher++] = teacher;
        }
        return teacher.getId();
    }
};