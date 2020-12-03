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

    switch (monthAsInt) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "This integer does" <<
            "not correspond to a month" << std::endl;
            break;
    }
}
