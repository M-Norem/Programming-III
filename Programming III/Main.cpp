#include <iostream>
#include "Main.h"

// Use the standard namespace
using namespace std;

// Constructor
Main::Main() {
    // Constructor can be used to initialize any member variables if needed
}

// Function to get string input from the user
string Main::getStringInput(int attemptNumber, int stringNumber) {
    string input;
    cout << "Enter string " << stringNumber << " (Attempt " << attemptNumber << "): ";
    getline(cin, input);
    return input;
}

// Function to concatenate two strings
string Main::concatenateStrings(const string& str1, const string& str2) {
    return str1 + str2;
}

// Function to run the concatenation process
void Main::run() {
    for (int i = 1; i <= 3; ++i) {
        string str1 = getStringInput(i, 1);
        string str2 = getStringInput(i, 2);
        string concatenatedStr = concatenateStrings(str1, str2);
        cout << "Concatenated Result (Attempt " << i << "): " << concatenatedStr << endl << endl;
    }
}

// Main function
int main() {
    Main app;
    app.run();
    return 0;
}
