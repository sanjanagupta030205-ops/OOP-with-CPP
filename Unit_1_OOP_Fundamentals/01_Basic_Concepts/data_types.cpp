// Program: Demonstration of Different Data Types in C++
// Real-life example: Storing student details

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

int main()                // Program execution starts from main().
{
    // int is used to store whole numbers.
    int age = 20;

    // float is used to store decimal numbers.
    float height = 5.8f;

    // double is used to store decimal numbers with higher precision.
    double percentage = 85.75;

    // char is used to store one character.
    char grade = 'A';

    // bool is used to store true or false.
    bool passed = true;

    // string is used to store a group of characters or text.
    string name = "Rahul";

    // Display the string value.
    cout << "Student Name: " << name << endl;

    // Display the integer value.
    cout << "Age: " << age << endl;

    // Display the float value.
    cout << "Height: " << height << " feet" << endl;

    // Display the double value.
    cout << "Percentage: " << percentage << "%" << endl;

    // Display the character value.
    cout << "Grade: " << grade << endl;

    // Display the Boolean value.
    cout << "Passed: " << passed << endl;

    // return 0 indicates successful program execution.
    return 0;
}