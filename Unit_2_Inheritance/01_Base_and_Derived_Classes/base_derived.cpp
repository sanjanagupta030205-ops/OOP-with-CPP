// Program: Demonstration of Base and Derived Classes in C++
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
// It contains common information of an employee.
class Employee
{
protected:
    // Protected members can be accessed by the base class
    // and its derived classes.
    int employeeId;
    string name;

public:
    // Function to set employee information.
    void setEmployeeData(int id, string n)
    {
        employeeId = id;
        name = n;
    }

    // Function to display employee information.
    void displayEmployeeData()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Manager is the DERIVED CLASS.
// Manager inherits properties and functions from Employee.
class Manager : public Employee
{
private:
    // This is a private member of the Manager class.
    string department;

public:
    // Function to set manager information.
    void setManagerData(int id, string n, string dept)
    {
        // employeeId and name are inherited protected members.
        employeeId = id;
        name = n;

        // Store the department.
        department = dept;
    }

    // Function to display manager information.
    void displayManagerData()
    {
        cout << "=== Manager Information ===" << endl;

        // Display inherited employee information.
        displayEmployeeData();

        // Display Manager-specific information.
        cout << "Department: " << department << endl;
    }
};

int main()
{
    // Create an object of the derived class Manager.
    Manager manager1;

    // Set manager information.
    manager1.setManagerData(101, "Rahul", "IT Department");

    // Display manager information.
    manager1.displayManagerData();

    // return 0 means successful program execution.
    return 0;
}