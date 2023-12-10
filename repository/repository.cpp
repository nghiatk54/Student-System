#include "../model/models.cpp"
#include <bits/stdc++.h>
using namespace std;

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
    Student students[25];
    int index = 0;

public:
    int addStudent(Student student)
    {
        if (index == 25)
        {
            cout << "Full Student" << '\n';
        }
        else
        {
            students[index] = student;
            index++;
        }
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
    Course courses[25];
    int index = 0;

public:
    int addCourse(Course course)
    {
        if (index == 25)
        {
            cout << "Full Course" << '\n';
        }
        else
        {
            courses[index] = course;
            index++;
        }
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
    Teacher teachers[25];
    int index = 0;

public:
    int addTeacher(Teacher teacher)
    {
        if (index == 25)
        {
            cout << "Full Teacher" << '\n';
        }
        else
        {
            teachers[index] = teacher;
            index++;
        }
    }
};