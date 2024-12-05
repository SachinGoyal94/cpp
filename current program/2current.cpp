#include <iostream>
using namespace std;

class Cel {
    float c; // Temperature in Celsius
public:
    // Default constructor
    Cel() : c(0) {}

    // Parameterized constructor for Fahrenheit to Celsius conversion
    Cel(float f) { c = (f - 32) * 5 / 9; }

    // Overloading assignment operator to handle conversion from float
    Cel& operator=(float f) {
        c = (f - 32) * 5 / 9;
        return *this;
    }

    // Function to display temperature in Celsius
    void show() const { cout << "Celsius: " << c << endl; }
};

int main() {
    Cel cvalue(50); // Create an object with Fahrenheit 50
    cvalue.show();  // Display the converted Celsius value

    float f; // Variable to store Fahrenheit input
    cout << "Fahrenheit: ";
    cin >> f;

    cvalue = f; // Use overloaded assignment operator for conversion
    cvalue.show(); // Display the new Celsius value

    return 0;
}
