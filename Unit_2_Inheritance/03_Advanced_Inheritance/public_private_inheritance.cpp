// Program: Demonstration of Public and Private Inheritance in C++
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
class Employee
{
public:
    // Public member of the base class.
    string companyName;

protected:
    // Protected member of the base class.
    string employeeName;

private:
    // Private member of the base class.
    int employeeId;

public:
    // Function to set employee information.
    void setEmployee(int id, string name)
    {
        employeeId = id;
        employeeName = name;
    }

    // Function to display employee information.
    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Company: " << companyName << endl;
    }
};

// Manager uses PUBLIC INHERITANCE.
// Public members remain public in Manager.
// Protected members remain protected in Manager.
class Manager : public Employee
{
public:
    // Function to display Manager information.
    void displayManager()
    {
        cout << "=== Public Inheritance ===" << endl;

        // Public member can be accessed.
        cout << "Company: " << companyName << endl;

        // Protected member can be accessed inside the derived class.
        cout << "Employee Name: " << employeeName << endl;

        // Private member cannot be accessed directly.
        // It is displayed through the base class function.
        displayEmployee();
    }
};

// Developer uses PRIVATE INHERITANCE.
// Public and protected members of Employee become
// private members of Developer.
class Developer : private Employee
{
public:
    // Function to set Developer information.
    void setDeveloper(int id, string name, string company)
    {
        // Calling the inherited function inside the class.
        setEmployee(id, name);

        // Accessing inherited public member inside the class.
        companyName = company;
    }

    // Function to display Developer information.
    void displayDeveloper()
    {
        cout << "=== Private Inheritance ===" << endl;

        // Accessing inherited function inside the class.
        displayEmployee();
    }
};

int main()
{
    // Create a Manager object.
    Manager manager1;

    manager1.companyName = "ABC Technologies";
    manager1.setEmployee(110, "Rahul");

    // Display Manager information.
    manager1.displayManager();

    cout << endl;

    // Create a Developer object.
    Developer developer1;

    developer1.setDeveloper(111, "Priya", "XYZ Software");

    // Display Developer information.
    developer1.displayDeveloper();

    // Return 0 means successful program execution.
    return 0;
}