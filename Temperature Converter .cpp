#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Ask user for temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 1.8) + 32;

    // Output the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    // Bonus conditions
    if (celsius < 0) {
        cout << "Freezing!" << endl;
    } else if (celsius > 30) {
        cout << "Hot!" << endl;
    }

    return 0;
}

