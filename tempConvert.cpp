// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April May 05, 2025
// The program uses a function called fahrenheit
// to convert from fahrenheit to Celsius


#include <cmath>
#include <iostream>
#include <string>

// Fahrenheit function
void fahrenheit() {
    // Declare the variables inside the fahrenheit function
    // Get user input as a string
    std::string celsiusStr;
    // Declare Celsius and Fahrenheit as a float
    float celsius, fahrenheit;
    // Get the user input as a string
    std::cout << "Enter temperature(celsius): ";
    std::cin >> celsiusStr;

    try {
        // type cast the string to a float and
        // Validate if the user input is valid
        celsius = std::stof(celsiusStr);

        // Celsius conversion from celsius to Fahrenheit
        fahrenheit = celsius * (1.8) + 32;

        // Display the conversion
        std::cout  << celsius << "C = " << fahrenheit << "F"
        << std::endl;

    // catch statement for any Invalid inputs
    } catch (...) {
        std::cout << "\nInvalid input. Please enter a float"
                  << std::endl;
    }
}
int main() {
    // Call functions
    fahrenheit();

    // Display ending message
    std::cout << "Thanks for playing" << std::endl;
    return 0;
}
