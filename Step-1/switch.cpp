// include directives are used to include the necessary libraries for the program
#include <iostream>  // Include C++ Library for input and output to the C++ console
#include <string>    // Include C++ Library for using the string class

// The main function is the entry point of a C++ program
int main() {

    // C++ variable declarations
    
    int age = 25;               // Declares an integer variable "age" and sets it to 25
    double height = 1.75;       // Declares a double precision floating-point variable "height"
    float weight = 70.5f;       // Declares a single precision floating-point variable "weight" (note the 'f' suffix)
    char initial = 'A';         // A character variable
    bool isStudent = true;      // A boolean variable (true/false)
    char letters[] = {"Joe"};   // An array of characters (can be used as a C-style string)
    std::string name = "Alice"; // A string variable (requires including <string>)

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


}