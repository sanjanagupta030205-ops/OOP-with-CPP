// Program: Demonstration of Constructor in C++
// Real-life example: Creating a Student object with initial information

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Student is a class.
// A class is a blueprint used to create objects.
class Student
{
private:
    // These are private data members of the Student class.
    int rollNumber;
    string name;
    double percentage;

public:
    // This is a parameterized constructor.
    // A constructor has the same name as the class.
    // It is automatically called when an object is created.
    Student(int r, string n, double p)
    {
        // Store the received values in the data members.
        rollNumber = r;
        name = n;
        percentage = p;
    }

    // This function displays student information.
    void displayData()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    // Create the first Student object.
    // The constructor is automatically called here.
    Student s1(101, "Rahul", 85.5);

    // Display the information of the first student.
    cout << "=== Student Information ===" << endl;
    s1.displayData();

    // return 0 means successful program execution.
    return 0;
}