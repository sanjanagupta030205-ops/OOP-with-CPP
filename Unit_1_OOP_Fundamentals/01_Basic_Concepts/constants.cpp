// Program: Demonstration of Constants in C++
// Real-life example: Student admission information

#include <iostream>      // Includes the input/output library.

using namespace std;     // Allows us to use cout directly.

int main()             // main() is the starting point of the program.
{
    // const makes a variable constant.
    // Once assigned, its value cannot be changed.
    const int MAX_MARKS = 100;

    // const double stores a fixed decimal value.
    const double PASSING_PERCENTAGE = 40.0;

    // Normal variable can be changed.
    int studentMarks = 75;

    // Display the maximum marks.
    cout << "Maximum Marks: " << MAX_MARKS << endl;

    // Display the passing percentage.
    cout << "Passing Percentage: " << PASSING_PERCENTAGE << "%" << endl;

    // Display the student's marks.
    cout << "Student Marks: " << studentMarks << endl;

    // Calculate the student's percentage.
    double percentage = (studentMarks * 100.0) / MAX_MARKS;

    // Display the calculated percentage.
    cout << "Student Percentage: " << percentage << "%" << endl;

    // Check whether the student passed.
    if (percentage >= PASSING_PERCENTAGE)
    {
        // This message is displayed when the condition is true.
        cout << "Result: Pass" << endl;
    }
    else
    {
        // This message is displayed when the condition is false.
        cout << "Result: Fail" << endl;
    }

    // return 0 means successful program execution.
    return 0;
}