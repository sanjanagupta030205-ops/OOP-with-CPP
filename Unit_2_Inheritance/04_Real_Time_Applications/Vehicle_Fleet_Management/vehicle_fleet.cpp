// Program: Vehicle Fleet Management System
// Unit 2: Inheritance
// Real-life application: Delivery Vehicle Fleet Management

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.
#include <vector>        // Provides the vector container.
#include <memory>        // Provides smart pointers.

using namespace std;     // Allows us to use cout, string and vector directly.

// Vehicle is the BASE CLASS.
class Vehicle
{
protected:
    // Common information for every vehicle.
    string vehicleId;
    string registrationNumber;

public:
    // Constructor of the base Vehicle class.
    Vehicle(string id, string reg)
        : vehicleId(id), registrationNumber(reg)
    {
    }

    // Function to start the vehicle engine.
    void startEngine() const
    {
        cout << "Engine started for Vehicle "
             << vehicleId << endl;
    }

    // Virtual function for displaying vehicle information.
    // Derived classes can override this function.
    virtual void displayInfo() const
    {
        cout << "Vehicle ID: " << vehicleId << endl;
        cout << "Registration Number: "
             << registrationNumber << endl;
    }

    // Virtual destructor.
    virtual ~Vehicle() = default;
};

// Truck is derived from Vehicle.
class Truck : public Vehicle
{
private:
    // Load capacity of the truck in tons.
    double loadCapacity;

public:
    // Constructor of Truck.
    Truck(string id, string reg, double capacity)
        : Vehicle(id, reg), loadCapacity(capacity)
    {
    }

    // Override displayInfo() for Truck.
    void displayInfo() const override
    {
        cout << "Truck | ";

        // Display common Vehicle information.
        cout << "Vehicle ID: " << vehicleId << endl;

        cout << "Registration Number: "
             << registrationNumber << endl;

        // Display truck-specific information.
        cout << "Load Capacity: "
             << loadCapacity << " tons" << endl;
    }
};

// DeliveryVan is derived from Vehicle.
class DeliveryVan : public Vehicle
{
private:
    // Number of packages loaded in the van.
    int packageCount;

public:
    // Constructor of DeliveryVan.
    DeliveryVan(string id, string reg, int packages)
        : Vehicle(id, reg), packageCount(packages)
    {
    }

    // Override displayInfo() for DeliveryVan.
    void displayInfo() const override
    {
        cout << "Delivery Van | ";

        // Display common Vehicle information.
        cout << "Vehicle ID: " << vehicleId << endl;

        cout << "Registration Number: "
             << registrationNumber << endl;

        // Display van-specific information.
        cout << "Packages Loaded: "
             << packageCount << endl;
    }
};

// Bike is derived from Vehicle.
class Bike : public Vehicle
{
private:
    // Stores whether the bike has a delivery box.
    bool hasDeliveryBox;

public:
    // Constructor of Bike.
    Bike(string id, string reg, bool hasBox)
        : Vehicle(id, reg), hasDeliveryBox(hasBox)
    {
    }

    // Override displayInfo() for Bike.
    void displayInfo() const override
    {
        cout << "Delivery Bike | ";

        // Display common Vehicle information.
        cout << "Vehicle ID: " << vehicleId << endl;

        cout << "Registration Number: "
             << registrationNumber << endl;

        // Display bike-specific information.
        cout << "Delivery Box: "
             << (hasDeliveryBox ? "Available" : "Not Available")
             << endl;
    }
};

int main()
{
    // Create a vector of smart pointers to the base class.
    // It can store different types of vehicles.
    vector<unique_ptr<Vehicle>> fleet;

    // Add a Truck object to the fleet.
    fleet.push_back(
        make_unique<Truck>(
            "V001",
            "MH12-AB-1234",
            10.5
        )
    );

    // Add a DeliveryVan object to the fleet.
    fleet.push_back(
        make_unique<DeliveryVan>(
            "V002",
            "MH12-CD-5678",
            50
        )
    );

    // Add a Bike object to the fleet.
    fleet.push_back(
        make_unique<Bike>(
            "V003",
            "MH12-EF-9012",
            true
        )
    );

    cout << "=== Fleet Status ===" << endl;
    cout << endl;

    // Range-based loop visits every vehicle in the fleet.
    for (const auto& vehicle : fleet)
    {
        // Start the vehicle engine.
        vehicle->startEngine();

        // Polymorphism calls the correct displayInfo()
        // function for each derived vehicle.
        vehicle->displayInfo();

        cout << endl;
    }

    // Return 0 means successful program execution.
    return 0;
}