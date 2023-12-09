#include "baseEntity.cpp"

// Class Teacher
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