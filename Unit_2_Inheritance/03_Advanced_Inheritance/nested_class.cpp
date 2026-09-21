// Program: Demonstration of Nested Class in C++
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the outer class.
class Employee
{
private:
    // Private data members of Employee.
    int employeeId;
    string name;

public:
    // Constructor of Employee.
    Employee(int id, string n)
    {
        employeeId = id;
        name = n;
    }

    // Nested class inside Employee.
    // This class is called EmployeeDetails.
    class EmployeeDetails
    {
    public:
        // Function to display additional employee information.
        void displayDepartment(string department)
        {
            cout << "Department: " << department << endl;
        }

        // Function to display employee designation.
        void displayDesignation(string designation)
        {
            cout << "Designation: " << designation << endl;
        }
    };

    // Function of the outer Employee class.
    void displayEmployee()
    {
        cout << "=== Employee Information ===" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
    }
};

int main()
{
    // Create an object of the outer Employee class.
    Employee employee1(116, "Rahul");

    // Display information using the outer class function.
    employee1.displayEmployee();

    cout << endl;

    // Create an object of the nested EmployeeDetails class.
    // The nested class is accessed using Employee::EmployeeDetails.
    Employee::EmployeeDetails details;

    // Display additional employee information.
    details.displayDepartment("Information Technology");
    details.displayDesignation("Software Developer");

    // Return 0 means successful program execution.
    return 0;
}