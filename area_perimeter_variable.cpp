// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program calculates the area and perimeter of a rectangle

#include <iostream>

int main() {
    // this function calculates the area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter the length of the rectangle as an integer (mm): ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle as an integer (mm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << std::endl;
    std::cout << "The area is " << area << "mm². " << std::ends;
    std::cout << std::endl;
    std::cout << "The perimeter is " << perimeter << " mm. " << std::ends;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
