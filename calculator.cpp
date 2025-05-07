// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 7th, 2025
// Calculator program in C++

#include <iostream>
#include <string>
#include <cmath>

// Function to add
void add(float n1, float n2) {
    std::cout << n1 << " + " << n2 << " = " << n1 + n2;
}

// Function to subtract
void subtract(float n1, float n2) {
    std::cout << n1 << " - " << n2 << " = " << n1 - n2;
}

// Function to multiply
void multiply(float n1, float n2) {
    std::cout << n1 << " * " << n2 << " = " << n1 * n2;
}

// Function to divide
void divide(float n1, float n2) {
    if (n2 == 0) {
        std::cout << n1 << " / " << n2 << " = " << "Undefined";
    } else {
        std::cout << n1 << " / " << n2 << " = " << n1 / n2;
    }
}

// Function for modulo
void modulo(float n1, float n2) {
    if (n2 == 0) {
        std::cout << n1 << " % " << n2 << " = " << "Undefined";
    } else {
        std::cout << n1 << " % " << n2 << " = " << fmod(n1, n2);
    }
}

// Function to call operation functions
int main() {
    // Initialize variables
    std::string operation;
    std::string n1Input;
    std::string n2Input;

    float number1;
    float number2;

    // Get input from user, assign to variables
    std::cout << "Enter an operation for your program (+,-,*,/,%):";
    std::cin >> operation;

    std::cout << "Enter the first number:";
    std::cin >> n1Input;

    std::cout << "Enter the second number:";
    std::cin >> n2Input;

    // Try catch convert to float
    try {
        // Convert into float
        number1 = std::stof(n1Input);
        number2 = std::stof(n2Input);

        // Call respective operation function
        if (operation == "+") {
            add(number1, number2);
        } else if (operation == "-") {
            subtract(number1, number2);
        } else if (operation == "-") {
            multiply(number1, number2);
        } else if (operation == "/") {
            divide(number1, number2);
        } else if (operation == "%") {
            modulo(number1, number2);
        } else {
            std::cout << "Invalid operation, please try again";
        }
    } catch (std::invalid_argument) {
        // Error msg
        std::cout << "Error: you entered string in either " << number1
        << " or " << number2;
    }
}
