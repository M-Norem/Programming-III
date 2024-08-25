# Table of Contents

1. [Simple C++ String Concatenation :: Main Class](#simple-c-string-concatenation--main-class)
2. [Summary of Changes :: Main Class](#summary-of-changes--main-class)

---

# Simple C++ String Concatenation :: Main Class

## Overview

This C++ program defines a class named `Main` that handles the task of collecting two string inputs from the user, concatenating them, and displaying the result. The program collects and processes three sets of inputs, demonstrating basic string handling and class structure in C++.

## Pseudocode

1. **Start Program**

2. **Define Main Class:**
   - **Attributes:**
      - None (all operations are done within methods)
   - **Methods:**
      - `getStringInput(int attemptNumber, int stringNumber)` - Retrieves a string input from the user.
      - `concatenateStrings(const string& str1, const string& str2)` - Concatenates two strings and returns the result.
      - `run()` - Coordinates the process of collecting inputs, concatenating them, and displaying the results.

3. **Implementation:**
   - **Class `Main` Constructor:**
      - Initializes the class (empty constructor, no initialization needed).
   - **Method `getStringInput` Implementation:**
      - Prompts the user for a string input based on attempt number and string number.
   - **Method `concatenateStrings` Implementation:**
      - Concatenates two strings.
   - **Method `run` Implementation:**
      - Iteratively collects and processes three sets of string inputs and displays the concatenated results.

4. **Run the Program:**
   - Instantiate the `Main` class.
   - Call the `run` method to execute the program.

5. **End Program**

---

# Summary of Changes :: Main Class

## Overview

This document summarizes the structure and implementation details of the `Main` class, which was created to handle string concatenation operations in a simple C++ program. The class-based approach improves modularity and maintainability of the code.

## Changes Made

1. **Class Definition:**
   - Defined a `Main` class to encapsulate all operations related to string input and concatenation.

2. **String Input Handling:**
   - Implemented the `getStringInput` method to handle user inputs, prompting for different string numbers and attempts.

3. **String Concatenation:**
   - Implemented the `concatenateStrings` method to handle the concatenation of two input strings.

4. **Program Flow Management:**
   - Implemented the `run` method to manage the overall program flow, ensuring that three sets of inputs are collected and processed.

5. **Namespace Usage:**
   - Used `using namespace std;` to avoid the need for `std::` prefix throughout the code.

## Summary

- Encapsulated program logic within a `Main` class.
- Streamlined string input and concatenation processes.
- Structured the program for ease of future extension or modification.
- Simplified code with `using namespace std;` to improve readability.
