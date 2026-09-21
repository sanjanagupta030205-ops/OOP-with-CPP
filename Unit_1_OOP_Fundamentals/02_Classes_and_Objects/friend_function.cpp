// Program: Demonstration of Friend Function in C++
// Real-life example: Accessing private student information

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Student is a class used to store student information.
class Student
{
private:
    // Private data members cannot normally be accessed
    // directly from outside the class.
    int rollNumber;
    string name;
    double percentage;

public:
    // Constructor initializes the student information.
    Student(int r, string n, double p)
    {
        rollNumber = r;
        name = n;
        percentage = p;
    }

    // Declare displayData() as a friend function.
    // A friend function can access private members of the class.
    friend void displayData(Student s);
};

// This is the definition of the friend function.
// It is not a member function of the Student class.
void displayData(Student s)
{
    // The friend function can access private data members.
    cout << "=== Student Information ===" << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Name: " << s.name << endl;
    cout << "Percentage: " << s.percentage << "%" << endl;
}

int main()
{
    // Create a Student object.
    Student s1(101, "Rahul", 85.5);

    // Call the friend function.
    displayData(s1);

    // return 0 means successful program execution.
    return 0;
}