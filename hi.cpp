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

    int firstNum;
    int secondNum;
    int thirdNum;
    int greatestNum = 0;

    // input
    std::cout << "Welcome to the greatest number teller!" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter the first number: ";
    std::cin >> firstNum;

    // process & output
    if (firstNum != int) {
        std::cout << "Wrong input. Try again." << std::endl;
    } else {
        if (firstNum > greatestNum) {
            greatestNum = firstNum;
        } else {
            {}
        }
    }
    std::cout << "Enter the second number: ";
    std::cin >> secondNum;
    if (secondNum != int) {
        std::cout << "Wrong input. Try again." << std::endl;
    } else {
        if (secondNum > greatestNum) {
            greatestNum = secondNum;
        } else {
            {}
        }
    }
    std::cout << "Enter the third number: ";
    std::cin >> thirdNum;
    if (thirdNum != int) {
        std::cout << "Wrong input. Try again." << std::endl;
    } else {
        if (thirdNum > greatestNum) {
            greatestNum = thirdNum;
        } else {
            {}
        }
        }
}
