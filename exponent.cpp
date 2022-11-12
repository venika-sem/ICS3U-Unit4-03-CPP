// Copyright(c) 2022 Venika Sem All rights reserved.
//
// Created by : Venika Sem
// Created on : Nov 2022

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // creating variables
    std::string inputNumber;
    float numberAsFloat;
    int numberAsInt;
    int counter;

    // input
    std::cout << "Enter a integer >= 0: ";
    std::cin >> inputNumber;

    // process and output
    std::cout << "\n";
    try {
        numberAsInt = std::stoi(inputNumber);
        numberAsFloat = std::stof(inputNumber);
        if (numberAsInt < 0 || numberAsFloat != numberAsInt) {
            std::cout << "This is not a positive.";
        } else {
            for (counter = 0; counter <= numberAsInt; counter++) {
                std::cout << counter << "² = " << pow(counter, 2) << "\n";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << " "
                  << "this is not a valid input";
    }

    std::cout << "\n\nDone.\n";
}
