#include "baseEntity.cpp"

// Class student
class Student : public BaseEntity
{
private:
    double gpa;

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