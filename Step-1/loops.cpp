// include directives are used to include the necessary libraries for the program
#include <iostream>  // Include C++ Library for input and output to the C++ console
#include <string>    // Include C++ Library for using the string class

// The main function is the entry point of a C++ program
int main() {

    // C++ variable declarations
    
    // set int variable name to "number"
    int number;
    // set char variable name to "letter"
    char letter;
    // set string variable name to "name"
    std::string name;



    // std::cout << number; // Print the value of "number" to the console
    // std::cout << letter; // Print the value of "letter" to the console

    // std::cout << "write a number: "; // Print message to the console
    // std::cin >> number; // Read user input and store it in the variable "number"
    // std::cout << "you wrote: " << number << std::endl; // Print the value of "number" to the console
    // std::cout << "write a letter: "; // Print message to the console
    // std::cin >> letter; // Read user input and store it in the variable "letter"
    // std::cout << "you wrote: " << letter << std::endl; // Print the value of "letter" to the console
    // std::cout << "write a name (string): "; // Print message to the console
    // std::cin >> name; // Read user input and store it in the variable "name"
    // std::cout << "you wrote: " << name << std::endl; // Print the value of "name" to the console

    // basic for-loop example
    //'i' is for index/itteration and can be any name.
    //set the 'i' value to 0 and it iterates 5 times
    //set the 'i' value to -10 and it will it iterate 15 times for example
    for (int i = 0; i < 5; i++) {
        // This is a simple for loop that iterates 5 times
        std::cout << "Iteration: " << i << std::endl; // Print the current iteration number
    }

    //Use for-loops with variables

    //Using the int varible 'number' to loop it as many times as the number is set to
    for (int i = 0; i <= number; i++) {
        std::cout << i << std::endl;
    }

    // Basic while-loop example
    // you need to set the variable value before in while-loop, but not in a for-loop.
    // here is the same variable (int number) as used before
    // it will count up to 5 based on the number you write in console
    while (number <= 5) {
        std::cout << number << std::endl;
        number++;
    }

    // Basic do while-loop
    // check do before while at least 1 time
    // keeps loop until you write a number over 10, but you can write number less than 10.
    do {
        std::cout << "write a number bigger than 10: ";
        std::cin >> number;
    } while (number <= 10);

    std::cout << "you wrote: " << number << std::endl;

    // use return 0 (good for old compilers etc, dont need to use after c++11)
    return 0;

}