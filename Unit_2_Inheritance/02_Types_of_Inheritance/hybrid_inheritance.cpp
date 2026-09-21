// Program: Demonstration of Hybrid Inheritance in C++
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

// Developer inherits from Employee.
class Developer : public Employee
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

// Tester also inherits from Employee.
class Tester : public Employee
{
protected:
    // Tester-specific information.
    string testingTool;

public:
    // Function to set tester information.
    void setTester(string tool)
    {
        testingTool = tool;
    }

    // Function to display tester information.
    void displayTester()
    {
        cout << "Testing Tool: " << testingTool << endl;
    }
};

// TeamLead inherits from both Developer and Tester.
// This combination creates a Hybrid Inheritance structure.
class TeamLead : public Developer, public Tester
{
private:
    string projectName;

public:
    // Function to set project information.
    void setProject(string project)
    {
        projectName = project;
    }

    // Function to display Team Lead information.
    void displayTeamLead()
    {
        cout << "=== Team Lead Information ===" << endl;
        cout << "Project Name: " << projectName << endl;
        cout << "Programming Language: "
             << programmingLanguage << endl;
        cout << "Testing Tool: " << testingTool << endl;
    }
};

int main()
{
    // Create an object of the TeamLead class.
    TeamLead teamLead1;

    // Set developer information.
    teamLead1.setDeveloper("C++");

    // Set tester information.
    teamLead1.setTester("Selenium");

    // Set project information.
    teamLead1.setProject("Smart Banking System");

    // Display Team Lead information.
    teamLead1.displayTeamLead();

    // Return 0 means successful program execution.
    return 0;
}
