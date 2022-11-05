// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 11 - 04 - 22
// This program calculates and displays
// the power of 2 starting from 0 until this number.

#include <iostream>
#include <string>

int main() {
    // Describing the program.
    std::cout <<
    "This program program calculates and displays the power"
              << " of 2 starting from 0 until this number.\n";
    // Defining all the variables.
    std::string userPowStr;
    int numPowInt;
    float userNumFloat;
    std::cout << "What is the number you wish to calculate? ";
    std::cin >> userPowStr;
    // Using try catch to catch invalid input.
    try {
        numPowInt = std::stoi(userPowStr);
        // Troubleshooting.
        if (userNumFloat = std::stof(userPowStr)) {
            if (userNumFloat != numPowInt) {
                std::cout << userNumFloat << " is not a whole number\n";
                return main();
            }
        }
        // Checking for negative number inputs.
        if (numPowInt <= 0) {
            std::cout <<
            "Your input " << numPowInt <<
            " is not a positive integer (e.g 5)\n";
        }  // This part gets every number within the range of 0-NumberGiven.
        for (int loopCount = 1; loopCount < numPowInt; loopCount++) {
            // Output.
            std::cout << loopCount << "^2 = " << loopCount <<
            ". (looping " << loopCount << " times)\n";
        }
    }
    // Catching all inputs that are decimals.
    catch (std::invalid_argument) {
        std::cout << "Your input '" << userPowStr <<
        "' is not a number, please enter an integer(e.g 5)\n";
        return main();
        }
    }
