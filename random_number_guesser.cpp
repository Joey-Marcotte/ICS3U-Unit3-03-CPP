// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program gets user to guess a number
// with user input

#include <iostream>
#include <cstdlib>
int rand();

int main() {
    int numberGuessed;


    while (true) {
        // input
        std::cout << "Guess a number between 0-9: ";
        std::cin >> numberGuessed;
        if (numberGuessed == (rand() % 10) + 1) {
            std::cout << "You won, you guessed the number" << std::endl;
            break;
        } else {
         (numberGuessed != (rand() % 10) + 1);
            std::cout << "Wrong, try again" << std::endl;
        }
    }
}
