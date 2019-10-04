// Copyright (c) 2019 Joseph Palermo All rights reserved
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program asks the user to guess a number

#include <iostream>


int main() {
    // This program asks the user to guess a number

    // constants
    const int CORRECT_NUMBER = 5;
    int userGuess;

    // input
    std::cout << "Guess the number between 0 & 9 (integer): " << std::endl;
    std::cin >> userGuess;
    std::cout << "" << std::endl;
    // process
    if (userGuess == CORRECT_NUMBER) {
        std::cout << "Correct!" << std::endl;
    } else if (userGuess != CORRECT_NUMBER) {
        std::cout << "Incorrect! The correct answer was 5!" << std::endl;
    }
}
