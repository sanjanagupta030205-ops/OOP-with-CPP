// Program: Demonstration of Friend Class in C++
// Unit 2: Inheritance
// Real-life example: Employee Salary Management

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Forward declaration of the SalaryManager class.
// It is required because Employee declares SalaryManager
// as a friend class.
class SalaryManager;

// Employee is the main class.
class Employee
{
private:
    // Private members cannot normally be accessed
    // directly outside the Employee class.
    int employeeId;
    string name;
    double salary;

public:
    // Constructor to initialize employee information.
    Employee(int id, string n, double s)
    {
        employeeId = id;
        name = n;
        salary = s;
    }

    // SalaryManager is declared as a friend class.
    // Therefore, SalaryManager can access the private
    // members of Employee.
    friend class SalaryManager;
};

// SalaryManager is a friend class of Employee.
class SalaryManager
{
public:
    // This function can directly access the private
    // members of the Employee class.
    void displaySalaryDetails(Employee employee)
    {
        cout << "=== Employee Salary Details ===" << endl;

        // Accessing private member employeeId.
        cout << "Employee ID: "
             << employee.employeeId << endl;

        // Accessing private member name.
        cout << "Employee Name: "
             << employee.name << endl;

        // Accessing private member salary.
        cout << "Salary: Rs. "
             << employee.salary << endl;
    }
};

int main()
{
    // Create an Employee object.
    Employee employee1(115, "Rahul", 65000);

    // Create a SalaryManager object.
    SalaryManager manager;

    // SalaryManager can access Employee's private data
    // because it has been declared as a friend class.
    manager.displaySalaryDetails(employee1);

    // Return 0 means successful program execution.
    return 0;
}