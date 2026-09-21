// Program: Demonstration of Single Inheritance in C++
// Unit 2: Inheritance
// Real-life example: Employee and Manager

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
class Employee
{
protected:
    // These are protected data members.
    int employeeId;
    string name;

public:
    // Function to set employee information.
    void setEmployee(int id, string n)
    {
        employeeId = id;
        name = n;
    }

    // Function to display employee information.
    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Manager is the DERIVED CLASS.
// Manager inherits from Employee.
class Manager : public Employee
{
private:
    // This data member belongs to the Manager class.
    string department;

public:
    // Function to set manager-specific information.
    void setDepartment(string dept)
    {
        department = dept;
    }

    // Function to display manager information.
    void displayManager()
    {
        cout << "=== Manager Information ===" << endl;

        // Calling the inherited function.
        displayEmployee();

        // Displaying manager-specific information.
        cout << "Department: " << department << endl;
    }
};

int main()
{
    // Create an object of the derived Manager class.
    Manager manager1;

    // Set employee information inherited from Employee.
    manager1.setEmployee(106, "Rohan");

    // Set manager-specific information.
    manager1.setDepartment("Sales");

    // Display complete manager information.
    manager1.displayManager();

    // Return 0 means successful program execution.
    return 0;
}