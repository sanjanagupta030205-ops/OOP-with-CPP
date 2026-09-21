#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SmartDevice
{
private:
    string deviceId;
    string deviceName;
    string location;
    string status;
    string lastUpdated;

public:
    // Parameterized constructor
    SmartDevice(string id, string name, string loc, string time)
        : deviceId(id),
          deviceName(name),
          location(loc),
          status("OFF"),
          lastUpdated(time)
    {
    }

    // Switch device ON
    void switchOn(string time)
    {
        status = "ON";
        lastUpdated = time;
    }

    // Switch device OFF
    void switchOff(string time)
    {
        status = "OFF";
        lastUpdated = time;
    }

    // Change device status
    void changeStatus(string newStatus, string time)
    {
        status = newStatus;
        lastUpdated = time;
    }

    // Display device information
    void display() const
    {
        cout << "ID: " << deviceId
             << " | Device: " << deviceName
             << " | Location: " << location
             << " | Status: " << status
             << " | Last Updated: " << lastUpdated
             << endl;
    }
};

int main()
{
    // Create a collection of smart devices
    vector<SmartDevice> devices;

    devices.emplace_back(
        "D001",
        "Light",
        "Living Room",
        "08:00"
    );

    devices.emplace_back(
        "D002",
        "Thermostat",
        "Bedroom",
        "08:05"
    );

    devices.emplace_back(
        "D003",
        "Camera",
        "Main Door",
        "08:10"
    );

    devices.emplace_back(
        "D004",
        "Door Lock",
        "Main Door",
        "08:15"
    );

    cout << "============================================" << endl;
    cout << "       SMART HOME DEVICE MANAGER" << endl;
    cout << "============================================" << endl;

    cout << "\n=== Initial Home Dashboard ===" << endl;

    for (const auto& device : devices)
    {
        device.display();
    }

    // Perform device operations
    devices[0].switchOn("09:00");
    devices[1].changeStatus("COOLING", "09:05");
    devices[2].switchOn("09:10");
    devices[3].switchOn("09:15");

    cout << "\n=== Updated Home Dashboard ===" << endl;

    for (const auto& device : devices)
    {
        device.display();
    }

    // Switch some devices OFF
    devices[0].switchOff("10:00");
    devices[2].switchOff("10:10");

    cout << "\n=== Final Home Dashboard ===" << endl;

    for (const auto& device : devices)
    {
        device.display();
    }

    return 0;
}