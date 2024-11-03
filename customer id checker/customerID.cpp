//
//  customerID.cpp
//  
//
//  Created by maya nachiappan on 11/2/24.
//

#include "customerID.hpp"

bool valid(const std::string& customerNumber) {
    // Check length
    if (customerNumber.length() != 6) {
        return false;
    }


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
