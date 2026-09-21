// Program: Student Attendance Management System
// Real-life example: Tracking student attendance in a college

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Student is a class used to represent a student.
class Student
{
private:
    // Private data members provide encapsulation.
    int rollNo;
    string name;
    int totalDays;
    int presentDays;

public:
    // Constructor initializes student information.
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        totalDays = 0;
        presentDays = 0;
    }

    // This function marks the attendance of the student.
    void markAttendance(bool isPresent)
    {
        // Increase the total number of classes.
        totalDays++;

        // If the student is present, increase present days.
        if (isPresent)
        {
            presentDays++;
        }
    }

    // This function calculates the attendance percentage.
    double getAttendancePercentage() const
    {
        // Avoid division by zero when no classes are recorded.
        if (totalDays == 0)
        {
            return 0.0;
        }

        // Calculate and return attendance percentage.
        return (presentDays * 100.0) / totalDays;
    }

    // This function displays the attendance report.
    void display() const
    {
        cout << "Roll: " << rollNo
             << " | Name: " << name
             << " | Attendance: "
             << getAttendancePercentage() << "%" << endl;
    }
};

int main()
{
    // Create the first Student object.
    Student s1(101, "Rahul");

    // Create the second Student object.
    Student s2(102, "Priya");

    // Mark Rahul's attendance.
    s1.markAttendance(true);
    s1.markAttendance(true);
    s1.markAttendance(false);

    // Mark Priya's attendance.
    s2.markAttendance(true);
    s2.markAttendance(true);
    s2.markAttendance(true);

    // Display the attendance report.
    cout << "=== Attendance Report ===" << endl;

    // Display Rahul's attendance.
    s1.display();

    // Display Priya's attendance.
    s2.display();

    // return 0 means successful program execution.
    return 0;
}