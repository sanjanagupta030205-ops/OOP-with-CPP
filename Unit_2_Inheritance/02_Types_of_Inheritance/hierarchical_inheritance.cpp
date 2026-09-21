// Program: Demonstration of Hierarchical Inheritance in C++
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
class Employee
{
protected:
    // Common information of all employees.
    int employeeId;
    string name;

public:
    // Function to set employee information.
    void setEmployee(int id, string n)
    {
        employeeId = id;
        name = n;
    }

    // Function to display common employee information.
    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Manager is the first DERIVED CLASS.
// It inherits from Employee.
class Manager : public Employee
{
private:
    string department;

public:
    // Function to set manager information.
    void setManager(string dept)
    {
        department = dept;
    }

    // Function to display manager information.
    void displayManager()
    {
        cout << "=== Manager ===" << endl;
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

// Developer is the second DERIVED CLASS.
// It also inherits from Employee.
class Developer : public Employee
{
private:
    string programmingLanguage;

public:
    // Function to set developer information.
    void setDeveloper(string language)
    {
        programmingLanguage = language;
    }

    // Function to display developer information.
    void displayDeveloper()
    {
        cout << "=== Developer ===" << endl;
        displayEmployee();
        cout << "Programming Language: "
             << programmingLanguage << endl;
    }
};

int main()
{
    // Create an object of Manager.
    Manager manager1;

    // Set Manager information.
    manager1.setEmployee(108, "Anita");
    manager1.setManager("Human Resources");

    // Display Manager information.
    manager1.displayManager();

    cout << endl;

    // Create an object of Developer.
    Developer developer1;

    // Set Developer information.
    developer1.setEmployee(109, "Karan");
    developer1.setDeveloper("C++");

    // Display Developer information.
    developer1.displayDeveloper();

    // Return 0 means successful program execution.
    return 0;
}