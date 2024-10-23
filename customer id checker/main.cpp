//
//  main.cpp
//  customer id checker
//
//  Created by maya nachiappan on 10/23/24.
//

#include <iostream>
#include <string>

bool valid(const std::string& customerNumber) // function to validate all checks of the customer id
{
    // Check length
    if (customerNumber.length() != 6) {
        return false;
    }

    // check first two characters for alphabetic values
    for (int i = 0; i < 2; ++i) {
        if (!(customerNumber[i] >= 'A' && customerNumber[i] <= 'Z') &&
            !(customerNumber[i] >= 'a' && customerNumber[i] <= 'z')) {
            return false;
        }
    }

    // Check last four characters for integer values
    for (int i = 2; i < 6; ++i) {
        if (customerNumber[i] < '0' || customerNumber[i] > '9') {
            return false;
        }
    }

    return true;
}

int main() {
    std::string customerNumber;

    // Prompt user for customer number
    std::cout << "Enter customer id number";
    std::cin >> customerNumber;

    // Validate the customer number
    if (valid(customerNumber)) {
        std::cout << "Valid customer number." << std::endl;
    } else {
        std::cout << "Invalid customer number. please retry" << std::endl;
    }

    return 0;
}
