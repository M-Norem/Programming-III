#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to append user input to a file
void appendToFile(const std::string& filename, const std::string& input) {
    std::ofstream file(filename, std::ios_base::app); // Open file in append mode
    if (file.is_open()) {
        file << input << std::endl; // Append input to file
        file.close();
    }
    else {
        std::cerr << "Error: Unable to open file for appending." << std::endl;
    }
}

// Function to reverse the contents of a file and write to another file
void reverseFileContents(const std::string& inputFilename, const std::string& outputFilename) {
    std::ifstream inFile(inputFilename);
    if (!inFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return;
    }

    // Read file contents into a string
    std::string contents((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    inFile.close();

    // Reverse the contents
    std::reverse(contents.begin(), contents.end());

    // Write reversed contents to the new file
    std::ofstream outFile(outputFilename);
    if (outFile.is_open()) {
        outFile << contents;
        outFile.close();
    }
    else {
        std::cerr << "Error: Unable to open output file for writing." << std::endl;
    }
}

int main() {
    std::string input;

    // Get user input
    std::cout << "Enter text to append to the file: ";
    std::getline(std::cin, input);

    // Append to CSC450_CT5_mod5.txt
    appendToFile("CSC450_CT5_mod5.txt", input);

    // Reverse the contents and write to CSC450-mod5-reverse.txt
    reverseFileContents("CSC450_CT5_mod5.txt", "CSC450-mod5-reverse.txt");

    std::cout << "Data appended and reversed successfully." << std::endl;

    return 0;
}
