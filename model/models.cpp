#include <iostream>
using namespace std;

// Create class ShareData
class ShareData
{
private:
    int id;
    string name;

public:
    // Setter information
    // Function setter ID
    void setId(int id)
    {
        this->id = id;
    }

    // Function setter name
    void setName(string name)
    {
        this->name = name;
    }

    // Getter information
    // Function get ID
    int getId()
    {
        return id;
    }

    // Function get name
    string getName()
    {
        return name;
    }
};

// Create class BaseEntity
class BaseEntity : public ShareData
{
private:
    int age;
    string phoneNumber;

public:
    // Setter information
    // Function setter Age
    void setAge(int age)
    {
        this->age = age;
    }

    // Function setter Phone number
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    // Getter information
    // Function get Age
    int getAge()
    {
        return age;
    }

    // Function get Phone number
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

// Create class Teacher
class Teacher : public BaseEntity
{
private:
    double salary;
    int studentIds[5]; // Declare array item ID in students

public:
    // Setter information
    // Function setter Salary
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // Function setter StudentIds
    void setStudentIds(int studentIds[5])
    {
        for (int i = 0, length = sizeof(studentIds) / sizeof(studentIds[0]); i < length; i++)
        {
            this->studentIds[i] = studentIds[i];
        }
    }

    // Getter information
    // Function get Salary
    double getSalary()
    {
        return salary;
    }

    // Function get studentIds
    int *getStudentIds()
    {
        return studentIds;
    }
};

// Create class Course
class Course : public ShareData
{
private:
    double hour;
    int studentIds[5]; // Declare array item ID in students

public:
    // Setter information
    // Function set Hour
    void setHour(double hour)
    {
        this->hour = hour;
    }

    // Function setter StudentIds
    void setStudentIds(int studentIds[5])
    {
        for (int i = 0, length = sizeof(studentIds) / sizeof(studentIds[0]); i < length; i++)
        {
            this->studentIds[i] = studentIds[i];
        }
    }

    // Getter information
    // Function get Hour
    double getHour()
    {
        return hour;
    }

    // Function get studentIds
    int *getStudentIds()
    {
        return studentIds;
    }
};

// Create class Student
class Student : public BaseEntity
{
private:
    double gpa;
    Teacher teachers[5]; // Declare array item class Teacher
    Course courses[5];   // Declare array item class Course

public:
    // Setter information
    // Function setter GPA
    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }

    // Function setter Teachers
    void setTeachers(Teacher teachers[5])
    {
        for (int i = 0, length = sizeof(teachers) / sizeof(teachers[0]); i < length; i++)
        {
            this->teachers[i] = teachers[i];
        }
    }

    // Function setter Courses
    void setCourses(Course courses[5])
    {
        for (int i = 0, length = sizeof(courses) / sizeof(courses[0]); i < length; i++)
        {
            this->courses[i] = courses[i];
        }
    }

    // Getter information
    // Function get GPA
    double getGpa()
    {
        return gpa;
    }

    // Function get Teachers
    Teacher *getTeachers()
    {
        return teachers;
    }

    // Function get Courses
    Course *getCourses()
    {
        return courses;
    }
};
