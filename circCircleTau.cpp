// Copyright (c) 2025 Gustav I All rights reserved.
//
// Created by: Gustav Ihlenfeld
// Date: May 1, 2021
// This program asks the user for the radius and then
// displays the circumference using tau.
#include <iostream>

int main() {
    // declaring tau
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user (user input section)
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // calculate the circumference using const tau
    circumference = TAU * radius;

    // display the circumference to the user with the given input
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " mm" << std::endl;
}
