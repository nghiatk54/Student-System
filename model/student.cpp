#include "baseEntity.cpp" // Include class BaseEntity
#include "teacher.cpp"    // Include class Teacher

// Class student
class Student : public BaseEntity
{
private:
    double gpa;
    string n;
    Teacher arr[5]; // Declare array item class Teacher

public:
    // Setter information
    // Function setter GPA
    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }

    // Getter information
    // Function get GPA
    double getGpa()
    {
        return gpa;
    }
};