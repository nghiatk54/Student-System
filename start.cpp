#include <iostream>
using namespace std;

// Declare function display system
void displaySystem();

// Declare function show List
void showList(string value);

int main()
{
    int process;
    int flag = 0;
    while (true)
    {
        displaySystem(); // Display system program
        cin >> process;
        switch (process)
        {
        case 1:
            showList("Student"); // Show list Student
            break;
        case 2:
            showList("Course"); // Show list Course
            break;
        case 3:
            showList("Teacher"); // Show list Teacher
            break;
        case 4:
            flag = 1;
            break;
        default:
            cout << "Invalid Choose" << endl;
        }
        if (flag == 1)
        {
            break;
        }
    }
}

// Declare function display system
void displaySystem()
{
    cout << "\t\t\t*********** Student Management System ***********" << endl;
    cout << "Please Enter Your Process you need to do!" << endl;
    cout << "1 - About Students"
         << "\t\t"
         << "2 - About Courses" << endl;
    cout << "3 - About Teachers"
         << "\t\t"
         << "4 - Exit" << endl;
}

// Function show list by value
void showList(string value)
{
    cout << "1 - Add " << value
         << "\t\t"
         << "2 - Remove " << value << endl;
    cout << "3 - Edit " << value
         << "\t"
         << "4 - Show " << value << endl;
    cout << "5 - Exit" << endl;
}