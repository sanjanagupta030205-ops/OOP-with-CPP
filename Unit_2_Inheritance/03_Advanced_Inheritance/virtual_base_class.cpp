// Program: Demonstration of Virtual Base Class in C++
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
class Employee
{
protected:
    // Common employee information.
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

// Developer inherits from Employee using virtual inheritance.
// virtual prevents duplicate copies of Employee
// in the final derived class.
class Developer : virtual public Employee
{
protected:
    // Developer-specific information.
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
        cout << "Programming Language: "
             << programmingLanguage << endl;
    }
};

// Manager also inherits from Employee using virtual inheritance.
class Manager : virtual public Employee
{
protected:
    // Manager-specific information.
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
        cout << "Department: " << department << endl;
    }
};

// TechnicalManager inherits from both Developer and Manager.
// Because both use virtual inheritance, only one shared
// Employee object exists inside TechnicalManager.
class TechnicalManager : public Developer, public Manager
{
private:
    // Technical Manager-specific information.
    string projectName;

public:
    // Function to set project information.
    void setProject(string project)
    {
        projectName = project;
    }

    // Function to display complete information.
    void displayTechnicalManager()
    {
        cout << "=== Technical Manager Information ===" << endl;

        // Employee information is available only once.
        displayEmployee();

        // Display Developer information.
        displayDeveloper();

        // Display Manager information.
        displayManager();

        // Display Technical Manager information.
        cout << "Project Name: " << projectName << endl;
    }
};

int main()
{
    // Create an object of the final derived class.
    TechnicalManager manager1;

    // Set the shared Employee information.
    manager1.setEmployee(112, "Rahul");

    // Set Developer information.
    manager1.setDeveloper("C++");

    // Set Manager information.
    manager1.setManager("Software Development");

    // Set Technical Manager information.
    manager1.setProject("Smart Banking System");

    // Display all information.
    manager1.displayTechnicalManager();

    // Return 0 means successful program execution.
    return 0;
}