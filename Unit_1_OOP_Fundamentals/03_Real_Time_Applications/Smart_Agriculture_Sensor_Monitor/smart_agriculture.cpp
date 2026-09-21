// Program: Smart Agriculture Sensor Monitor
// Real-life application: Monitoring soil moisture sensors on a smart farm

#include <iostream>      // Provides input and output functions.
#include <string>        // Provides the string data type.
#include <vector>        // Provides the vector container.

using namespace std;     // Allows us to use cout, string, and vector directly.

// SoilSensor is a class representing a soil-moisture sensor.
class SoilSensor
{
private:
    // Private data members provide encapsulation.
    string sensorId;
    double moistureLevel;
    string timestamp;

public:
    // Parameterized constructor initializes the sensor object.
    SoilSensor(string id, double moisture, string time)
    {
        sensorId = id;
        moistureLevel = moisture;
        timestamp = time;
    }

    // This function updates the sensor reading and time.
    void readSensor(double newMoisture, string newTime)
    {
        moistureLevel = newMoisture;
        timestamp = newTime;
    }

    // This function displays the sensor information.
    void displayData() const
    {
        cout << "Sensor: " << sensorId
             << " | Moisture: " << moistureLevel << "%"
             << " | Time: " << timestamp << endl;
    }
};

int main()
{
    // Create a vector to store multiple SoilSensor objects.
    vector<SoilSensor> farmSensors;

    // Add the first sensor object to the vector.
    farmSensors.emplace_back("S001", 45.2, "08:00");

    // Add the second sensor object to the vector.
    farmSensors.emplace_back("S002", 52.8, "08:00");

    // Add the third sensor object to the vector.
    farmSensors.emplace_back("S003", 38.5, "08:00");

    // Display the initial sensor readings.
    cout << "=== Morning Sensor Readings ===" << endl;

    // Range-based for loop displays every sensor object.
    for (const auto& sensor : farmSensors)
    {
        sensor.displayData();
    }

    // Update the reading of the first sensor.
    farmSensors[0].readSensor(47.5, "09:00");

    // Display the updated reading.
    cout << "\n=== Updated Reading ===" << endl;
    farmSensors[0].displayData();

    // return 0 means successful program execution.
    return 0;
}