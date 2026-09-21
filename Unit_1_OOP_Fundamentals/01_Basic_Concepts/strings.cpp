// Program: Demonstration of Strings in C++
// Real-life example: Storing and displaying student information

#include <iostream>      // Includes the input/output library.
#include <string>        // Includes the string data type.

using namespace std;     // Allows us to use cout and string directly.

int main()                 // main() is the starting point of the program.
{
    // Create a string variable to store the student's name.
    string studentName = "Rahul Gupta";

    // Create a string variable to store the course name.
    string courseName = "Artificial Intelligence and Data Science";

    // Display the student's name.
    cout << "Student Name: " << studentName << endl;

    // Display the course name.
    cout << "Course: " << courseName << endl;

    // length() returns the number of characters in the string.
    cout << "Name Length: " << studentName.length() << endl;

    // Display the first character of the student's name.
    cout << "First Character: " << studentName[0] << endl;

    // Add another string to the existing string.
    string college = "College of Engineering";

    // Display the college name.
    cout << "College: " << college << endl;

    // return 0 means the program ended successfully.
    return 0;
}