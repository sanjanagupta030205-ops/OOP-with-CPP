// Program: Demonstration of Static Data Member and Static Member Function
// Real-life example: Counting the number of students created

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Student is a class used to store student information.
class Student
{
private:
    // These are normal data members.
    int rollNumber;
    string name;

    // A static data member is shared by all objects of the class.
    static int studentCount;

public:
    // Constructor initializes the student information.
    Student(int r, string n)
    {
        rollNumber = r;
        name = n;

        // Increase the shared student count whenever an object is created.
        studentCount++;
    }

    // This function displays student information.
    void displayData()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
    }

    // Static member function accesses the static data member.
    static void displayStudentCount()
    {
        cout << "Total Students Created: " << studentCount << endl;
    }
};

// Define and initialize the static data member.
// A static data member must be defined outside the class.
int Student::studentCount = 0;

int main()
{
    // Create the first Student object.
    Student s1(101, "Rahul");

    // Create the second Student object.
    Student s2(102, "Amit");

    // Display information of both students.
    cout << "=== Student 1 ===" << endl;
    s1.displayData();

    cout << endl;

    cout << "=== Student 2 ===" << endl;
    s2.displayData();

    cout << endl;

    // Call the static member function using the class name.
    Student::displayStudentCount();

    // return 0 means successful program execution.
    return 0;
}