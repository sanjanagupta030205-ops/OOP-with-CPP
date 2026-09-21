// Program: Demonstration of Arrays in C++
// Real-life example: Storing marks of students

#include <iostream>      // Includes the input/output library.

using namespace std;     // Allows us to use cout directly.

int main()                 // main() is the starting point of the program.
{
    // Create an integer array to store marks of 5 students.
    int marks[5] = {85, 72, 90, 68, 78};

    // Display the heading.
    cout << "=== Student Marks ===" << endl;

    // for loop is used to access every element of the array.
    for (int i = 0; i < 5; i++)
    {
        // Display the student number and corresponding marks.
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }

    // Calculate the total marks.
    int total = 0;

    // Loop through the array to calculate the total.
    for (int i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }

    // Calculate the average marks.
    double average = total / 5.0;

    // Display the total marks.
    cout << "Total Marks: " << total << endl;

    // Display the average marks.
    cout << "Average Marks: " << average << endl;

    // return 0 means successful program execution.
    return 0;
}