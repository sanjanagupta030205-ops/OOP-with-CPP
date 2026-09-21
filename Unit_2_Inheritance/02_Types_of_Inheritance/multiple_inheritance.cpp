// Program: Demonstration of Multiple Inheritance in C++
// Unit 2: Inheritance
// Real-life example: Employee with Technical and Management Skills

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.

using namespace std;     // Allows us to use cout and string directly.

// TechnicalSkills is the first BASE CLASS.
class TechnicalSkills
{
protected:
    // Technical skill information.
    string programmingLanguage;

public:
    // Function to set technical skill.
    void setTechnicalSkill(string language)
    {
        programmingLanguage = language;
    }

    // Function to display technical skill.
    void displayTechnicalSkill()
    {
        cout << "Programming Language: " << programmingLanguage << endl;
    }
};

// ManagementSkills is the second BASE CLASS.
class ManagementSkills
{
protected:
    // Management skill information.
    string managementArea;

public:
    // Function to set management skill.
    void setManagementSkill(string area)
    {
        managementArea = area;
    }

    // Function to display management skill.
    void displayManagementSkill()
    {
        cout << "Management Area: " << managementArea << endl;
    }
};

// ProjectManager inherits from TWO base classes.
// Therefore, this is called Multiple Inheritance.
class ProjectManager : public TechnicalSkills, public ManagementSkills
{
private:
    // Project Manager-specific information.
    string projectName;

public:
    // Function to set project information.
    void setProject(string project)
    {
        projectName = project;
    }

    // Function to display complete information.
    void displayProjectManager()
    {
        cout << "=== Project Manager Information ===" << endl;
        cout << "Project Name: " << projectName << endl;

        // Call function inherited from TechnicalSkills.
        displayTechnicalSkill();

        // Call function inherited from ManagementSkills.
        displayManagementSkill();
    }
};

int main()
{
    // Create an object of the derived class.
    ProjectManager manager1;

    // Set technical skill.
    manager1.setTechnicalSkill("C++");

    // Set management skill.
    manager1.setManagementSkill("Project Management");

    // Set project name.
    manager1.setProject("Smart Banking System");

    // Display complete information.
    manager1.displayProjectManager();

    // Return 0 means successful program execution.
    return 0;
}