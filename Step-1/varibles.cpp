// include directives are used to include the necessary libraries for the program
#include <iostream>  // Include C++ Library for input and output to the C++ console
#include <string>    // Include C++ Library for using the string class

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

}