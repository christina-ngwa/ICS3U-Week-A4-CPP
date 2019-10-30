// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This function shows the greatest number
//   with user input

#include <iostream>
#include <string>

int main() {
    // This function shows the greastest number

    std::string firstNumAsString;
    std::string secondNumAsString;
    std::string thirdNumAsString;
    int firstNum;
    int secondNum;
    int thirdNum;
    int greatestNum = 0;

    // input
    std::cout << "Welcome to the greatest number teller!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the first number: ";
    std::cin >> firstNumAsString;

    // process & output
    try {
        firstNum = std::stoi(firstNumAsString);
        if (firstNum > greatestNum) {
            greatestNum = firstNum;
        } else {
            {}
        std::cout << "Enter the second number: ";
        std::cin >> secondNumAsString;
        } try {
            secondNum = std::stoi(secondNumAsString);
            if (secondNum > greatestNum) {
                greatestNum = secondNum;
            } else {
                {}
            std::cout << "Enter the third number: ";
            std::cin >> thirdNumAsString;
            } try {
                thirdNum = std::stoi(thirdNumAsString);
                if (thirdNum > greatestNum) {
                    greatestNum = thirdNum;
                } else {
                    {}
                }
                std::cout << "The greatest number is " << greatestNum <<
                ".";
            } catch (std::invalid_argument) {
                std::cout << "Wrong input. Try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Wrong input. Try again." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl;
    }
}
