// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This program calculates the cost of a pizza

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // This function calculates the cost of a pizza
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "Enter the diameter of the pizza (in):";
    std::cin >> diameter;

    // process
    sub_total = ((diameter * COST_PER_INCH) + LABOUR + RENT);
    total = sub_total * (1 + HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "The final cost is: $" << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << std::endl;
}
