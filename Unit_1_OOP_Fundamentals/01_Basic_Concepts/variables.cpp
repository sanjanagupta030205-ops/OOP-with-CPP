// Program: Demonstration of Variables in C++
// Real-life example: Storing student information

#include <iostream>      // Includes the input/output library.
#include <string>        // Includes the string data type.

using namespace std;     // Allows us to use cout and string without std::.

// main() is the starting point of every C++ program.
int main()
{
    // int is a data type used to store whole numbers.
    // rollNumber is the variable name.
    // 101 is the value stored in the variable.
    int rollNumber = 101;

    // string is used to store text.
    // studentName is the variable name.
    // "Rahul" is the value stored in the variable.
    string studentName = "Rahul";

    // double is used to store decimal numbers.
    // percentage is the variable name.
    // 85.5 is the value stored in the variable.
    double percentage = 85.5;

    // char is used to store a single character.
    // grade is the variable name.
    // 'A' is the value stored in the variable.
    char grade = 'A';

    // cout is used to display output on the screen.
    // << sends the value to the output.
    // endl moves the cursor to the next line.
    cout << "Student Roll Number: " << rollNumber << endl;

    // Displays the student's name.
    cout << "Student Name: " << studentName << endl;

    // Displays the student's percentage.
    cout << "Percentage: " << percentage << "%" << endl;

    // Displays the student's grade.
    cout << "Grade: " << grade << endl;

    // return 0 means the program finished successfully.
    return 0;
}