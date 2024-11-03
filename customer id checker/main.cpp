//
//  main.cpp
//  customer id checker
//
//  Created by maya nachiappan on 10/23/24.
//

#include <iostream>
#include <string>

#include "customerID.hpp"

int main() {
    std::string customerNumber;
    std::cout << "Enter customer ID number: ";
    std::cin >> customerNumber;

    if (valid(customerNumber)) {
        std::cout << "Valid customer ID." << std::endl;
    } else {
        std::cout << "Invalid customer ID. Please retry." << std::endl;
    }

    return 0;
}
