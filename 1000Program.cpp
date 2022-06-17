// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program says every possible RGB value

#include <iostream>

int main() {
    // This function says every possible RGB value
    int originalValue = 999;

    // Process & Output
    for (int counter = 1; counter <= 1001; counter++) {
        if (counter%5 == 0) {
            std::cout << originalValue + counter << std::endl;
        } else {
            std::cout << originalValue + counter << " ";
        }
    }


std::cout << "\nDone" << std::endl;
}
