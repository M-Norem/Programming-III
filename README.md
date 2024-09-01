# Dynamic Memory Management in C++ - Input and Pointer Usage

## Overview
This program is a simple C++ application that demonstrates how to use pointers with dynamic memory allocation. The program asks the user to enter three integer values, stores these values in three separate variables, and then dynamically allocates memory to store these values using integer pointers. The program also displays the contents of the variables and the memory locations they point to. Memory management is handled using the `new` and `delete` operators.

## Features
- User inputs three integer values.
- Dynamic memory allocation using pointers.
- Displays the values stored in variables and their corresponding pointers.
- Proper memory management with the `new` and `delete` operators.

## Code Explanation
1. **Variables and Input**: The program starts by declaring three integer variables to store the user's input.
2. **Dynamic Memory Allocation**: For each variable, a pointer is created that dynamically allocates memory to store the integer values using the `new` operator.
3. **Display Output**: The program then outputs the values stored in the variables and the values stored at the memory locations pointed to by the pointers.
4. **Memory Deallocation**: The dynamically allocated memory is freed using the `delete` operator to prevent memory leaks.

## How to Run
1. **Compile**: Use a C++ compiler like `g++` to compile the code.
    ```bash
    g++ main.cpp -o dynamic_memory_example
    ```
2. **Run**: Execute the compiled program.
    ```bash
    ./dynamic_memory_example
    ```

3. **Input**: Enter three integer values when prompted.
4. **Output**: The program will display the values and their corresponding pointers.

## Example Usage
```plaintext
Enter three integer values: 5 10 15
Variable 1: 5, Pointer 1: 5
Variable 2: 10, Pointer 2: 10
Variable 3: 15, Pointer 3: 15
