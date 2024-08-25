#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

void getInput(const std::string& prompt, std::string& result);
void getZipCode(std::string& zipCode);

int main() {
    std::string firstName, lastName, streetAddress, city, zipCode, state;

    // Collect user information
    getInput("Enter your first name: ", firstName);
    getInput("Enter your last name: ", lastName);
    getInput("Enter your street address: ", streetAddress);
    getInput("Enter your city: ", city);
    getInput("Enter your state: ", state);
    getZipCode(zipCode);

    // Display the collected information
    std::cout << "\nHere is the information you entered:\n";
    std::cout << "First Name: " << firstName << "\n";
    std::cout << "Last Name: " << lastName << "\n";
    std::cout << "Street Address: " << streetAddress << "\n";
    std::cout << "City: " << city << "\n";
    std::cout << "State: " << state << "\n";
    std::cout << "Zip Code: " << zipCode << "\n";

    return 0;
}

// Function to get input from the user
void getInput(const std::string& prompt, std::string& result) {
    std::cout << prompt;
    std::getline(std::cin, result);
}

// Function to get a valid zip code
void getZipCode(std::string& zipCode) {
    bool valid = false;
    while (!valid) {
        std::cout << "Enter your zip code: ";
        std::getline(std::cin, zipCode);

        // Check if the zip code is numeric and not empty
        valid = !zipCode.empty() && std::all_of(zipCode.begin(), zipCode.end(), [](char c) { return std::isdigit(static_cast<unsigned char>(c)); });

        if (!valid) {
            std::cout << "Error: Zip code must be numeric and not empty. Please try again.\n";
        }
    }
}



