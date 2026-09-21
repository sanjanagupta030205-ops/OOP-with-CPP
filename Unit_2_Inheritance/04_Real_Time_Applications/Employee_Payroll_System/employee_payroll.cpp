// Program: Employee Payroll System
// Unit 2: Inheritance
// Real-life application: Employee Payroll Management

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the ABSTRACT BASE CLASS.
class Employee
{
protected:
    // Protected members are accessible inside derived classes.
    int empId;
    string name;
    string department;

public:
    // Constructor of the base class.
    Employee(int id, string n, string dept)
        : empId(id), name(n), department(dept)
    {
    }

    // Function to display common employee information.
    void displayBasicInfo() const
    {
        cout << "ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }

    // Pure virtual function.
    // Every derived employee class must provide
    // its own salary calculation.
    virtual double calculateSalary() const = 0;

    // Virtual destructor.
    virtual ~Employee() = default;
};

// FullTimeEmployee is derived from Employee.
class FullTimeEmployee : public Employee
{
private:
    // Monthly salary of a full-time employee.
    double monthlySalary;

public:
    // Constructor of FullTimeEmployee.
    // It calls the Employee constructor first.
    FullTimeEmployee(int id, string n, string dept, double salary)
        : Employee(id, n, dept), monthlySalary(salary)
    {
    }

    // Function overriding.
    // Calculates salary for a full-time employee.
    double calculateSalary() const override
    {
        return monthlySalary;
    }

    // Function to display full-time employee information.
    void display() const
    {
        cout << "=== Full-Time Employee ===" << endl;

        // Display common employee information.
        displayBasicInfo();

        // Display employee type.
        cout << "Type: Full-Time" << endl;

        // Display calculated salary.
        cout << "Salary: Rs. "
             << calculateSalary() << endl;
    }
};

// PartTimeEmployee is derived from Employee.
class PartTimeEmployee : public Employee
{
private:
    // Hourly payment and number of hours worked.
    double hourlyRate;
    int hoursWorked;

public:
    // Constructor of PartTimeEmployee.
    PartTimeEmployee(int id, string n, string dept,
                     double rate, int hours)
        : Employee(id, n, dept),
          hourlyRate(rate),
          hoursWorked(hours)
    {
    }

    // Function overriding.
    // Calculates salary according to hours worked.
    double calculateSalary() const override
    {
        return hourlyRate * hoursWorked;
    }

    // Function to display part-time employee information.
    void display() const
    {
        cout << "=== Part-Time Employee ===" << endl;

        // Display common employee information.
        displayBasicInfo();

        // Display employee type.
        cout << "Type: Part-Time" << endl;

        // Display working details.
        cout << "Hourly Rate: Rs. "
             << hourlyRate << endl;

        cout << "Hours Worked: "
             << hoursWorked << endl;

        // Display calculated salary.
        cout << "Salary: Rs. "
             << calculateSalary() << endl;
    }
};

// Intern is another derived class.
class Intern : public Employee
{
private:
    // Fixed stipend given to an intern.
    double stipend;

public:
    // Constructor of Intern.
    Intern(int id, string n, string dept, double s)
        : Employee(id, n, dept), stipend(s)
    {
    }

    // Function overriding.
    // Returns the intern's fixed stipend.
    double calculateSalary() const override
    {
        return stipend;
    }

    // Function to display intern information.
    void display() const
    {
        cout << "=== Intern ===" << endl;

        // Display common employee information.
        displayBasicInfo();

        // Display employee type.
        cout << "Type: Intern" << endl;

        // Display calculated stipend.
        cout << "Stipend: Rs. "
             << calculateSalary() << endl;
    }
};

int main()
{
    // Create a full-time employee object.
    FullTimeEmployee fullTime(
        201,
        "Rahul",
        "IT",
        60000
    );

    // Create a part-time employee object.
    PartTimeEmployee partTime(
        202,
        "Priya",
        "Marketing",
        500,
        80
    );

    // Create an intern object.
    Intern intern(
        203,
        "Amit",
        "Research",
        15000
    );

    // Display full-time employee information.
    fullTime.display();

    cout << endl;

    // Display part-time employee information.
    partTime.display();

    cout << endl;

    // Display intern information.
    intern.display();

    // Return 0 means successful program execution.
    return 0;
}