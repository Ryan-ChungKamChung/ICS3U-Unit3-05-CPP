// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program displaying a month based on an inputted integer

#include <iostream>
#include <string>


int main() {
    // Program displaying a month based on an inputted integer

    std::string monthAsString;
    int monthAsInt;

    std::cout << "Give me an integer and I'll give you a month!" << std::endl;

    // Input
    std::cout << "Please enter an integer: ";
    std::cin >> monthAsString;

    // Process
    monthAsInt = atoi(monthAsString.c_str());

    if (monthAsInt == 1) {
        std::cout << "January" << std::endl;
    } else if (monthAsInt == 2) {
        std::cout << "February" << std::endl;
    } else if (monthAsInt == 3) {
        std::cout << "March" << std::endl;
    } else if (monthAsInt == 4) {
        std::cout << "April" << std::endl;
    } else if (monthAsInt == 5) {
        std::cout << "May" << std::endl;
    } else if (monthAsInt == 6) {
        std::cout << "June" << std::endl;
    } else if (monthAsInt == 7) {
        std::cout << "July" << std::endl;
    } else if (monthAsInt == 8) {
        std::cout << "August" << std::endl;
    } else if (monthAsInt == 9) {
        std::cout << "September" << std::endl;
    } else if (monthAsInt == 10) {
        std::cout << "October" << std::endl;
    } else if (monthAsInt == 11) {
        std::cout << "November" << std::endl;
    } else if (monthAsInt == 12) {
        std::cout << "December" << std::endl;
    } else {
        std::cout << "This integer does not correspond to a month"
        << std::endl;
    }
}
