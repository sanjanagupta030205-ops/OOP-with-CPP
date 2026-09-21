// Program: Demonstration of Function Overriding in C++
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
    }

    // Function of the base class.
    // This function will be overridden by the derived class.
    virtual void displayRole()
    {
        cout << "Employee Role: General Employee" << endl;
    }
};

// Manager is the DERIVED CLASS.
class Manager : public Employee
{
public:
    // Constructor of the derived class.
    Manager(int id, string n)
        : Employee(id, n)
    {
    }

    // This function overrides the base class function.
    void displayRole() override
    {
        cout << "Employee Role: Manager" << endl;
    }

    // Function to display manager information.
    void displayManager()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
        displayRole();
    }
};

int main()
{
    // Create an object of the Manager class.
    Manager manager1(105, "Arjun");

    cout << "=== Employee Information ===" << endl;

    // Display manager information.
    manager1.displayManager();

    // return 0 means successful program execution.
    return 0;
}