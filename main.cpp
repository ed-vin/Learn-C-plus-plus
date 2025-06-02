// This program is a simple introduction to C++ programming language.
// It covers the basic syntax of C++, how to declare variables, use if-else statements, switch statements, and loops.
// It is a good starting point for beginners to understand the structure of a C++ program and how to work with variables and control flow.

// include directives are used to include the necessary libraries for the program
#include <iostream>  // Include C++ Library for input and output to the C++ console

// if you are used to other programming languages, you might be new to the concept of namespaces.
// A namespace is a way to group related code together to avoid naming conflicts.
// In C++, the standard library is contained within the "std" namespace.
// This means that all standard library functions and types are prefixed with "std::".
// In C++, this is used to avoid writing "std::" before standard library functions and types.
using namespace std; // Using namespace to avoid writing std:: every time. Can be a problem in larger projects, so it's often better to use std:: explicitly.

// The main function is the entry point of a C++ program
// It is where the program starts executing
// The return type of main is int, which means it returns an integer value to the operating system
int main() {

    // here is where the program starts executing
    // all C++ programs must have a main function
    // Code is executed from top to bottom within the main function

    return 0;  // Program ends and returns 0 (no error)
}
