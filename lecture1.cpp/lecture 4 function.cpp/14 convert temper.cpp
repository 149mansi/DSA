#include <iostream>
using namespace std;

// Function declarations
double kelvinToCelsius(double temperatureKelvin);
double kelvinToFahrenheit(double temperatureKelvin);

int main() {
    // Input temperature in Kelvin
    double temperatureKelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> temperatureKelvin;

    // Call functions for conversion
    double temperatureCelsius = kelvinToCelsius(temperatureKelvin);
    double temperatureFahrenheit = kelvinToFahrenheit(temperatureKelvin);

    // Display the results
    cout << "Temperature in Celsius: " << temperatureCelsius << " °C" << endl;
    cout << "Temperature in Fahrenheit: " << temperatureFahrenheit << " °F" << endl;

    return 0;
}

// Function definitions
double kelvinToCelsius(double temperatureKelvin) {
    return temperatureKelvin - 273.15;
}

double kelvinToFahrenheit(double temperatureKelvin) {
    return (temperatureKelvin - 273.15) * 9.0 / 5.0 + 32.0;
}
