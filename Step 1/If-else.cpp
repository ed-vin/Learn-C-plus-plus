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

}