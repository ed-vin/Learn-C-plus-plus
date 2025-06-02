#include <iostream>  // Library for input and output to the C++ console
#include <string>    // Needed to use the string class
// using namespace std; // Using namespace to avoid writing std:: every time

int main() {
    
    // C++ program demonstrating basic syntax and variables
    // Declaring variables of different types
    // Variables in C++ can be declared with different data types
    // Integers, floating-point numbers, characters, boolean values, strings, etc.
    // Basic data types in C++
    
    int age = 25;               // Declares an integer variable "age" and sets it to 25
    double height = 1.75;       // Declares a double precision floating-point variable "height"
    float weight = 70.5f;       // Declares a single precision floating-point variable "weight" (note the 'f' suffix)
    char initial = 'A';         // A character variable
    bool isStudent = true;      // A boolean variable (true/false)
    char letters[] = {"Joe"};   // An array of characters (can be used as a C-style string)
    std::string name = "Alice"; // A string variable (requires including <string>)

    // Declaring variables with auto type (C++11 feature, type inferred by the compiler)
    auto var1 = "Hello";   // Declares a variable of type const char*
    auto var2 = 'C';       // Declares a variable of type char
    auto var3 = 3.14f;     // Declares a variable of type float

    // Printing values to the terminal
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Is student? " << isStudent << std::endl;
    std::cout << var1 << std::endl;
    std::cout << var2 << std::endl;
    std::cout << var3 << std::endl;
    std::cout << letters << std::endl;

    // If statements can be added here


    return 0;  // Program ends and returns 0 (no error)
}
