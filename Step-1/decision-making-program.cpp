// This is a basic If-statement program.

#include <iostream>  // Include C++ Library for input and output to the C++ console
//#include <cstdlib>  // Include C++ Library for random number generation

int main () {

    // set int variable name to "number"
    int number;
    // set char variable name to "letter"
    char letter;
    // set string variable name to "name"
    std::string name;

    // std::cout << number; // Print the value of "number" to the console
    // std::cout << letter; // Print the value of "letter" to the console

    std::cout << "write a number: "; // Print message to the console
    std::cin >> number; // Read user input and store it in the variable "number"
    // std::cout << "you wrote: " << number << std::endl; // Print the value of "number" to the console
    std::cout << "write a letter: "; // Print message to the console
    std::cin >> letter; // Read user input and store it in the variable "letter"
    // std::cout << "you wrote: " << letter << std::endl; // Print the value of "letter" to the console
    // std::cout << "write a name (string): "; // Print message to the console
    // std::cin >> name; // Read user input and store it in the variable "name"
    // std::cout << "you wrote: " << name << std::endl; // Print the value of "name" to the console

    // Basic if-else statement to compare the number

    // This checks if the number is less than 10, equal to 10, or greater than 10
    // if (number < 10) { // Check if the number is less than 10
    //     std::cout << "The number is less than 10." << std::endl; // Print message if true
    // } else if (number == 10) { // Check if the number is equal to 10
    //     std::cout << "The number is equal to 10." << std::endl; // Print message if true
    // } else { // If neither condition is true
    //     std::cout << "The number is greater than 10." << std::endl; // Print message if true
    // }

    // // basic if-else statement using logical operator AND (&&)

    // // Using varibles number and letter from (std::cin) input.
    // if (number <18 && (letter == 'A')) {
    //     std::cout << "The number is less than 18 and (&&) the letter == A" << std::endl;
    // } else if (number >18 && (letter == 'A')) {
    //     std::cout << "The number is more than 18 and (&&) the letter == A" << std::endl;
    // } else if (number >18 && (letter == 'B')) {
    //     std::cout << "The number is more than 18 and (&&) the letter == B" << std::endl;
    // } else {
    //     std::cout << "The input dont match the if-statements" << std::endl;
    // }

    // // basic if-else statement using multiple logical operators. AND (&&). OR (||)

    // // This checks the number like befor and also checks if the letter is 'A' or 'B'
    // if (number < 10 && (letter == 'A' || letter == 'B')) { // Check if number is less than 10 and letter is 'A' or 'B'
    //     std::cout << "The number is less than 10 and the letter is either A or B." << std::endl; // Print message if true
    // } else { // If neither condition is true
    //     std::cout << "Either the number is not less than 10 or the letter is not A or B." << std::endl; // Print message if true
    // }

    // // Basic switch statement to check the letter
    // switch (letter) { // Check the value of the letter
    //     case 'A': // If letter is 'A'
    //         std::cout << "The letter is A." << std::endl; // Print message if true
    //         break; // Exit the switch statement
    //     case 'B': // If letter is 'B'
    //         std::cout << "The letter is B." << std::endl; // Print message if true
    //         break; // Exit the switch statement
    //     default: // If letter is neither 'A' nor 'B'
    //         std::cout << "The letter is not A or B." << std::endl; // Print message if true
    // }

}