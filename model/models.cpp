#include <iostream>
using namespace std;

// Create class BaseEntity
class BaseEntity
{
private:
    int id;
    string name;
    int age;
    string phoneNumber;

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

public:
    // Setter information
    // Function setter Salary
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // Getter information
    // Function get Salary
    double getSalary()
    {
        return salary;
    }
};

// Create class Student
class Student : public BaseEntity
{
private:
    double gpa;
    string n;
    Teacher teachers[5]; // Declare array item class Teacher

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
        for (int i = 0; i < 5; i++)
        {
            this->teachers[i] = teachers[i];
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
};
