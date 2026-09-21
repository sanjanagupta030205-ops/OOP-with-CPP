// Program: Demonstration of Protected Members in C++
// Unit 2: Inheritance
// Real-life example: Employee Management System

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// Employee is the BASE CLASS.
class Employee
{
protected:
    // Protected members can be accessed inside this class
    // and directly inside its derived classes.
    int employeeId;
    string employeeName;
    double salary;

public:
    // Function to set employee information.
    void setEmployeeData(int id, string name, double s)
    {
        employeeId = id;
        employeeName = name;
        salary = s;
    }
};

// Manager is the DERIVED CLASS.
class Manager : public Employee
{
public:
    // This function directly accesses the protected members
    // inherited from the Employee class.
    void displayManagerData()
    {
        cout << "=== Manager Information ===" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main()
{
    // Create an object of the derived Manager class.
    Manager manager1;

    // Set employee information using the inherited function.
    manager1.setEmployeeData(102, "Amit", 55000);

    // Display the information.
    manager1.displayManagerData();

    // Return 0 means successful program execution.
    return 0;
}