// Program: Demonstration of Class and Object in C++
// Real-life example: Student Information System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Student is a class.
// A class is a blueprint used to create objects.
class Student
{
private:
    // Private data members store the student's information.
    int rollNumber;
    string name;
    double percentage;

public:
    // This function sets the student's information.
    void setData(int r, string n, double p)
    {
        rollNumber = r;
        name = n;
        percentage = p;
    }

    // This function displays the student's information.
    void displayData()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    // s1 is an object of the Student class.
    Student s1;

    // Store information inside the object.
    s1.setData(101, "Rahul", 85.5);

    // Display information of the object.
    cout << "=== Student Information ===" << endl;
    s1.displayData();

    // return 0 means successful program execution.
    return 0;
}