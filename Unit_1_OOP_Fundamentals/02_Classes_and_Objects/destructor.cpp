// Program: Demonstration of Destructor in C++
// Real-life example: Releasing Student object resources

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Student is a class used to store student information.
class Student
{
private:
    // Private data members store student information.
    int rollNumber;
    string name;

public:
    // This is a constructor.
    // It is automatically called when an object is created.
    Student(int r, string n)
    {
        rollNumber = r;
        name = n;

        cout << "Constructor called for " << name << endl;
    }

    // This function displays student information.
    void displayData()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }

    // This is a destructor.
    // A destructor has the same name as the class with ~ symbol.
    // It is automatically called when the object is destroyed.
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    // Create a Student object.
    Student s1(101, "Rahul");

    // Display the student's information.
    cout << "=== Student Information ===" << endl;
    s1.displayData();

    // The destructor will automatically be called
    // when the object goes out of scope at the end of main().
    
    // return 0 means successful program execution.
    return 0;
}