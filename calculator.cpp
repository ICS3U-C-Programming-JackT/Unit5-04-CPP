// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 7th, 2025
// Calculator program in C++

#include <cmath>
#include <iostream>
#include <string>

// Function to add
float add(float n1, float n2) {
    return n1 + n2;
}

// Function to subtract
float subtract(float n1, float n2) {
    return n1 - n2;
}

// Function to multiply
float multiply(float n1, float n2) {
    return n1 * n2;
}

// Function to divide (assumes n2 is not zero)
float divide(float n1, float n2) {
    return n1 / n2;
}

// Function for modulo (assumes n2 is not zero)
float modulo(float n1, float n2) {
    return fmod(n1, n2);
}

// Main function
int main() {
    std::string operation, n1Input, n2Input;
    float number1, number2;

    std::cout << "Enter an operation for your program (+,-,*,/,%): ";
    std::cin >> operation;

    std::cout << "Enter the first number: ";
    std::cin >> n1Input;

    std::cout << "Enter the second number: ";
    std::cin >> n2Input;

    try {
        number1 = std::stof(n1Input);
        number2 = std::stof(n2Input);

        float result;

        if (operation == "+") {
            result = add(number1, number2);
            std::cout << number1 << " + " << number2 << " = " << result;
        } else if (operation == "-") {
            result = subtract(number1, number2);
            std::cout << number1 << " - " << number2 << " = " << result;
        } else if (operation == "*") {
            result = multiply(number1, number2);
            std::cout << number1 << " * " << number2 << " = " << result;
        } else if (operation == "/") {
            if (number2 == 0) {
                std::cout << number1 << " / " << number2 << " = Undefined";
            } else {
                result = divide(number1, number2);
                std::cout << number1 << " / " << number2 << " = " << result;
            }
        } else if (operation == "%") {
            if (number2 == 0) {
                std::cout << number1 << " % " << number2 << " = Undefined";
            } else {
                result = modulo(number1, number2);
                std::cout << number1 << " % " << number2 << " = " << result;
            }
        } else {
            std::cout << "Invalid operation, please try again.";
        }

    } catch (std::invalid_argument&) {
        std::cout << "Error: You entered a string in either " << n1Input
                  << " or " << n2Input;
    }

    return 0;
}
