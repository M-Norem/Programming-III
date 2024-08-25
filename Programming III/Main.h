#pragma once
#include <string>

using namespace std;

class Main
{
public:
    // Constructor
    Main();

    // Function to run the concatenation process
    void run();

private:
    // Function to get string input from the user
    string getStringInput(int attemptNumber, int stringNumber);

    // Function to concatenate two strings
    string concatenateStrings(const string& str1, const string& str2);
};
