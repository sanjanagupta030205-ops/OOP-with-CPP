// Program: Demonstration of Destructor in Derived Class
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
class Employee
{
protected:
    // Protected members are accessible in the derived class.
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

    // Destructor of the base class.
    // It is automatically called when the object is destroyed.
    ~Employee()
    {
        cout << "Employee destructor called." << endl;
    }
};

// Manager is the DERIVED CLASS.
class Manager : public Employee
{
private:
    // Department belongs to the Manager class.
    string department;

public:
    // Constructor of the derived class.
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
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
    }

    // Destructor of the derived class.
    // It is automatically called when the object is destroyed.
    ~Manager()
    {
        cout << "Manager destructor called." << endl;
    }
};

int main()
{
    // Create an object of the derived class.
    Manager manager1(104, "Neha", "Finance");

    cout << endl;

    // Display manager information.
    manager1.displayManager();

    cout << endl;
    cout << "Program is ending..." << endl;

    // When main() ends, manager1 is automatically destroyed.
    // The derived destructor is called first,
    // followed by the base destructor.

    return 0;
}