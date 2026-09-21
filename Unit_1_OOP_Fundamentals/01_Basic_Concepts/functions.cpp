// Program: Demonstration of Functions in C++
// Real-life example: Calculating student marks and percentage

#include <iostream>      // Includes the input/output library.

using namespace std;     // Allows us to use cout directly.

// This function calculates the total of three marks.
int calculateTotal(int mark1, int mark2, int mark3)
{
    // Add all three marks and store the result in total.
    int total = mark1 + mark2 + mark3;

    // Return the total value to the calling function.
    return total;
}

// This function calculates the percentage.
double calculatePercentage(int total, int maximumMarks)
{
    // Calculate percentage using the formula.
    double percentage = (total * 100.0) / maximumMarks;

    // Return the calculated percentage.
    return percentage;
}

// main() is the starting point of the program.
int main()
{
    // Store marks of three subjects.
    int mathematics = 85;
    int programming = 90;
    int database = 80;

    // Call calculateTotal() and store the returned value.
    int total = calculateTotal(mathematics, programming, database);

    // Maximum marks for three subjects.
    int maximumMarks = 300;

    // Call calculatePercentage() to calculate the percentage.
    double percentage = calculatePercentage(total, maximumMarks);

    // Display the marks of each subject.
    cout << "Mathematics Marks: " << mathematics << endl;
    cout << "Programming Marks: " << programming << endl;
    cout << "Database Marks: " << database << endl;

    // Display the total marks.
    cout << "Total Marks: " << total << "/" << maximumMarks << endl;

    // Display the percentage.
    cout << "Percentage: " << percentage << "%" << endl;

    // return 0 means successful program execution.
    return 0;
}