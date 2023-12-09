#include <iostream>
using namespace std;

// Class BaseEntity
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