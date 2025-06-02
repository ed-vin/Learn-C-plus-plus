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

    //basic for loop example
    for (int i = age; i < 26; i++) {
        // This is a simple for loop that iterates 5 times
        std::cout << "Iteration: " << i << std::endl; // Print the current iteration number
    }
}