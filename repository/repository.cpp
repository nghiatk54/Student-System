#include "../model/models.cpp"
#include <bits/stdc++.h>
using namespace std;

//////////////////////////////////// STUDENT \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface StudentRepository
class StudentRepository
{
public:
    virtual int addStudent(Student student);
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
};

// Create class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
};

//////////////////////////////////// TEACHER \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Create class interface TeacherRepository
class TeacherRepository
{
};

// Create class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
};