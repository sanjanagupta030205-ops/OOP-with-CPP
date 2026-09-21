// Program: Demonstration of Constructor in Derived Class
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
class Employee
{
protected:
    // Protected members can be accessed by the derived class.
    int employeeId;
    string name;

public:
    // Constructor of the base class.
    Employee(int id, string n)
    {
        employeeId = id;
        name = n;

        cout << "Employee constructor called." << endl;
    }

    // Function to display employee information.
    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Manager is the DERIVED CLASS.
class Manager : public Employee
{
private:
    // Department is a member of the derived class.
    string department;

public:
    // Constructor of the derived class.
    // It first calls the constructor of the base class.
    Manager(int id, string n, string dept)
        : Employee(id, n)
    {
        department = dept;

        cout << "Manager constructor called." << endl;
    }

    // Function to display manager information.
    void displayManager()
    {
        cout << "=== Manager Information ===" << endl;

        // Display inherited employee information.
        displayEmployee();

        // Display manager-specific information.
        cout << "Department: " << department << endl;
    }
};

int main()
{
    // Create an object of the derived Manager class.
    // The derived constructor automatically calls
    // the base class constructor first.
    Manager manager1(103, "Priya", "Human Resources");

    cout << endl;

    // Display manager information.
    manager1.displayManager();

    // Return 0 means successful program execution.
    return 0;
}