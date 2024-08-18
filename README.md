# Table of Contents

1. [Critical Thinking I :: GetUserData](#critical-thinking-i--getuserdata)
2. [Summary of Changes :: CSC450_CT1_mod1-1](#summary-of-changes--csc450_ct1_mod1-1)
3. [Summary of Changes :: CSC450_CT1_mod1-1](#summary-of-changes--csc450_ct1_mod1-1)

---

# Critical Thinking I :: GetUserData

## Overview

This C++ program collects and displays user information including first name, last name, street address, city, and zip code. It uses functions to handle input and validate the zip code to ensure it is numeric.

## Pseudocode

1. **Start Program**

2. **Declare Variables:**
   - `firstName` (string)
   - `lastName` (string)
   - `streetAddress` (string)
   - `city` (string)
   - `zipCode` (string)

3. **Function to Get User Input:**
   - **Function `getInput(prompt, result)`**
     - Display the `prompt` message.
     - Read user input and store it in `result`.

4. **Function to Validate Zip Code:**
   - **Function `getZipCode(zipCode)`**
     - Repeat until a valid zip code is entered:
       - Display "Enter your zip code: ".
       - Read user input and store it in `zipCode`.
       - Check if `zipCode` is not empty and all characters are digits.
       - If invalid, display an error message and prompt again.

5. **Collect User Information:**
   - Call `getInput` to get the user's first name.
   - Call `getInput` to get the user's last name.
   - Call `getInput` to get the user's street address.
   - Call `getInput` to get the user's city.
   - Call `getZipCode` to get and validate the user's zip code.

6. **Display Collected Information:**
   - Print "Here is the information you entered:".
   - Print each piece of collected information (first name, last name, street address, city, zip code).

7. **End Program**

---

# Summary of Changes :: CSC450_CT1_mod1-1

## Overview

This document summarizes the updates and fixes applied to a C++ program that had several issues including syntax errors and incomplete functionality.

## Changes Made

1. **Include Necessary Headers:**
   - Added `#include <cstdlib>` to provide functionality for `system("pause")` (not used in the final version).
   - Kept `#include <conio.h>` to use `_getch()` for pausing the program.

2. **Namespace Declaration:**
   - Corrected the namespace declaration to `using namespace std;`.

3. **Output Statements:**
   - Fixed the syntax for the output statement to ensure proper string handling and output formatting.

4. **Wait for Output Screen:**
   - Implemented `_getch()` to pause the program until a key is pressed, allowing the user to see the output before the program exits.

5. **Main Function Return Statement:**
   - Added `return 0;` to signify successful completion of the program.

## Summary

- Updated header inclusions and corrected namespace usage.
- Fixed output statement syntax.
- Used `_getch()` for pausing, replacing other methods.
- Ensured proper return statement for program completion.

---

# Summary of Changes :: CSC450_CT1_mod1-1

## Overview

This document outlines the corrections and updates made to a C++ program that had syntax errors and incomplete functionality.

## Changes Made

1. **Namespace Declaration:**
   - Corrected the namespace declaration to `using namespace std;`.

2. **Output Statement Syntax:**
   - Fixed the syntax for output statements to use `<<` for stream insertion and corrected quotes around strings.
   - Corrected the output for `myMoney` by adding the variable to the `cout` statement.

3. **Variable Output:**
   - Added `myMoney` to the `cout` statement to properly display the total amount of money available.

4. **Wait for Output Screen:**
   - Implemented `_getch()` to pause the program until a key is pressed, allowing the user to view the output before the program exits.

5. **Main Function Return Statement:**
   - Ensured the return statement `return 0;` is present to indicate successful completion of the program.

## Summary

- Corrected header inclusions and namespace declaration.
- Fixed output statement syntax and ensured proper use of stream insertion.
- Included variable `myMoney` in the output statement.
- Used `_getch()` for pausing the program.
- Ensured proper return statement for program completion.
