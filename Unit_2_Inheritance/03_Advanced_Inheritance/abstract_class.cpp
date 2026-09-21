// Program: Demonstration of Abstract Class in C++
// Unit 2: Inheritance
// Real-life example: Employee Salary Management

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is an ABSTRACT BASE CLASS.
class Employee
{
protected:
    // Common information of every employee.
    int employeeId;
    string name;

public:
    // Constructor of the abstract class.
    Employee(int id, string n)
    {
        employeeId = id;
        name = n;
    }

    // Pure virtual function.
    // It makes Employee an abstract class.
    // Every derived class must provide its own implementation.
    virtual double calculateSalary() = 0;

    // Function to display common employee information.
    void displayBasicInfo()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
    }

    // Virtual destructor.
    virtual ~Employee()
    {
    }
};

// FullTimeEmployee is derived from Employee.
class FullTimeEmployee : public Employee
{
private:
    // Monthly salary of a full-time employee.
    double monthlySalary;

public:
    // Constructor of FullTimeEmployee.
    FullTimeEmployee(int id, string n, double salary)
        : Employee(id, n)
    {
        monthlySalary = salary;
    }

    // Implementation of the pure virtual function.
    double calculateSalary() override
    {
        return monthlySalary;
    }
};

// PartTimeEmployee is another derived class.
class PartTimeEmployee : public Employee
{
private:
    // Hourly rate and working hours.
    double hourlyRate;
    int hoursWorked;

public:
    // Constructor of PartTimeEmployee.
    PartTimeEmployee(int id, string n, double rate, int hours)
        : Employee(id, n)
    {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    // Implementation of the pure virtual function.
    double calculateSalary() override
    {
        return hourlyRate * hoursWorked;
    }
};

int main()
{
    // Create a FullTimeEmployee object.
    FullTimeEmployee fullTime(113, "Rahul", 60000);

    // Create a PartTimeEmployee object.
    PartTimeEmployee partTime(114, "Priya", 300, 80);

    cout << "=== Full-Time Employee ===" << endl;

    // Display basic information.
    fullTime.displayBasicInfo();

    // Calculate and display salary.
    cout << "Salary: Rs. "
         << fullTime.calculateSalary() << endl;

    cout << endl;

    cout << "=== Part-Time Employee ===" << endl;

    // Display basic information.
    partTime.displayBasicInfo();

    // Calculate and display salary.
    cout << "Salary: Rs. "
         << partTime.calculateSalary() << endl;

    // Employee objects cannot be created directly
    // because Employee is an abstract class.

    // Return 0 means successful program execution.
    return 0;
}