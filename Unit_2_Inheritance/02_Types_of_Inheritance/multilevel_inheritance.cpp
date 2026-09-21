// Program: Demonstration of Multilevel Inheritance in C++
// Unit 2: Inheritance
// Real-life example: Employee -> Manager -> Senior Manager

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

// Manager is derived from Employee.
// This is the second level of inheritance.
class Manager : public Employee
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

// SeniorManager is derived from Manager.
// This creates the third level of inheritance.
class SeniorManager : public Manager
{
private:
    // Senior Manager-specific information.
    int teamSize;

public:
    // Function to set senior manager information.
    void setSeniorManager(int size)
    {
        teamSize = size;
    }

    // Function to display complete information.
    void displaySeniorManager()
    {
        cout << "=== Senior Manager Information ===" << endl;

        // Employee information inherited from Employee.
        displayEmployee();

        // Manager information inherited from Manager.
        displayManager();

        // Senior Manager information.
        cout << "Team Size: " << teamSize << endl;
    }
};

int main()
{
    // Create an object of the last derived class.
    SeniorManager seniorManager1;

    // Set Employee information.
    seniorManager1.setEmployee(107, "Vikram");

    // Set Manager information.
    seniorManager1.setManager("Technology");

    // Set Senior Manager information.
    seniorManager1.setSeniorManager(15);

    // Display all information.
    seniorManager1.displaySeniorManager();

    // Return 0 means successful program execution.
    return 0;
}