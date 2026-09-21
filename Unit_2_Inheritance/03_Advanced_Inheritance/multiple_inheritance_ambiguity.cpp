// Program: Demonstration of Multiple Inheritance Ambiguity in C++
// Unit 2: Inheritance
// Real-life example: Employee Skills Management

#include <iostream>      // Provides input and output functions.

using namespace std;     // Allows us to use cout directly.

// TechnicalSkills is the first base class.
class TechnicalSkills
{
public:
    // Both base classes contain a function
    // with the same name.
    void display()
    {
        cout << "Technical Skills: C++ Programming" << endl;
    }
};

// ManagementSkills is the second base class.
class ManagementSkills
{
public:
    // This function has the same name as the
    // function in TechnicalSkills.
    void display()
    {
        cout << "Management Skills: Project Management" << endl;
    }
};

// ProjectManager inherits from both classes.
// This creates multiple inheritance.
class ProjectManager : public TechnicalSkills, public ManagementSkills
{
public:
    // This function resolves the ambiguity.
    void displayAllSkills()
    {
        cout << "=== Project Manager Skills ===" << endl;

        // Specify TechnicalSkills explicitly.
        TechnicalSkills::display();

        // Specify ManagementSkills explicitly.
        ManagementSkills::display();
    }
};

int main()
{
    // Create an object of ProjectManager.
    ProjectManager manager1;

    // Calling displayAllSkills() avoids ambiguity.
    manager1.displayAllSkills();

    // The following statement would create ambiguity:
    // manager1.display();

    // The compiler would not know whether to call
    // TechnicalSkills::display() or
    // ManagementSkills::display().

    // Return 0 means successful program execution.
    return 0;
}