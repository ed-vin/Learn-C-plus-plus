// This program is a simple introduction to C++ programming language.
// It covers the basic syntax of C++, how to declare variables, use if-else statements, switch statements, and loops.
// It is a good starting point for beginners to understand the structure of a C++ program and how to work with variables and control flow.

// include directives are used to include the necessary libraries for the program
#include <iostream>  // Include C++ Library for input and output to the C++ console
#include <string>    // Include C++ Library for using the string class
// using namespace std; // Using namespace to avoid writing std:: every time. Can be a problem in larger projects, so it's often better to use std:: explicitly.

// The main function is the entry point of a C++ program
// It is where the program starts executing
// The return type of main is int, which means it returns an integer value to the operating system
int main() {

    // Declaring variables in C++

    /* 
    
    Variables are used to store data that can be changed during program execution
    C++ is a statically typed language, meaning you must declare the type of variable before using it
    The basic syntax for declaring a variable is:
    data_type variable_name = value; // Example: int age = 25;

    C++ supports various data types, including:
    - int (integer), 
    - double (floating-point number), 
    - float (single precision floating-point number),
    - char (character), 
    - bool (boolean),
    - std::string (string class for text)
    The following code demonstrates the basic syntax of C++ and how to declare variables, use if-else statements, switch statements, and loops.
    Integers, floating-point numbers, characters, boolean values, strings, etc.
    Basic variables types in C++ 
    
    */

    // C++ variable declarations
    
    int age = 25;               // Declares an integer variable "age" and sets it to 25
    double height = 1.75;       // Declares a double precision floating-point variable "height"
    float weight = 70.5f;       // Declares a single precision floating-point variable "weight" (note the 'f' suffix)
    char initial = 'A';         // A character variable
    bool isStudent = true;      // A boolean variable (true/false)
    char letters[] = {"Joe"};   // An array of characters (can be used as a C-style string)
    std::string name = "Alice"; // A string variable (requires including <string>)

    // Declaring variables with auto type (C++11 feature, type inferred by the compiler)
    auto var1 = "Hello";   // Declares a variable of type const char* (C-style string)
    auto var2 = 1;         // Declares a variable of type int
    auto var3 = 3.14f;     // Declares a variable of type float

    // Printing values to the terminal
    // Using std::cout to output values to the console
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Is student? " << isStudent << std::endl;
    std::cout << var1 << std::endl;
    std::cout << var2 << std::endl;
    std::cout << var3 << std::endl;
    std::cout << letters << std::endl;

    // Basic if-else statement
    // Using int variable "age" to demonstrate a simple conditional statement
    // This checks if the int varible age is less than 18 (it is set to 25)
    if (age < 18) {
        std::cout << "You are under 18." << std::endl; // message if variable age under < 18
    }
    else {
        std::cout << "You are a senior." << std::endl; // message if variable age >= 18
    }

    // This example is using else if statement to check multiple conditions
    if (age < 13) {
        std::cout << "You are a child." << std::endl; // message if variable age under < 13
    } else if (age < 18) {
        std::cout << "You are a teenager." << std::endl; // message if variable age under < 18
    } else {
        std::cout << "You are an adult." << std::endl; // message if variable age >= 18
    }

    // Using multiple varibles in a conditional statement
    // This example checks if the height is greater than 1.5 and (&&) weight is less than 80
    if (height > 1.5 && weight < 80) {
        std::cout << "You are tall and light." << std::endl; // message if height > 1.5 and weight < 80
    } else {
        std::cout << "You are either short or heavy." << std::endl; // message if not both conditions are true
    }

    // Using multiple variables in a conditional statement with OR (||) operator
    // This example checks if the height is less than 1.5 or weight is greater than 80
    if (height < 1.5 || weight > 80) {
        std::cout << "You are either short or heavy." << std::endl; // message if height < 1.5 or weight > 80
    } else {
        std::cout << "You are tall and light." << std::endl; // message if both conditions are false
    }

    // Using bool variable "isStudent" to demonstrate a simple conditional statement
    if (isStudent == true) {
        std::cout << "You are a student." << std::endl; // message if Bool-variable isStudent is true
    } else {
        std::cout << "You are not a student." << std::endl; // message if variable isStudent is false
    }

    // Basic switch statements
    // Using switch statement to check the value of the char variable "initial"
    switch (initial) {
        case 'A':
            std::cout << "Your initial is A." << std::endl; // message if initial is 'A'
            break; // Break statement to exit the switch
        case 'B':
            std::cout << "Your initial is B." << std::endl; // message if initial is 'B'
            break; // Break statement to exit the switch
        default:
            std::cout << "Your initial is not A or B." << std::endl; // message if initial is neither 'A' nor 'B'
    }

    // LOOPS

    // for loop example

    // while loop example

    // do-while loop example

    


    return 0;  // Program ends and returns 0 (no error)
}
