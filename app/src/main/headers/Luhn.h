/*
 * @author Lewis Sneddon 05/03/2023.
 */
#ifndef LUHN_H
#define LUHN_H

#include <string>

    class Luhn {
        public:
            static bool checkLuhnAlgorithm(std::string cardNumber);
            static int generateLuhnCheckDigit(std::string cardNumber);
    };

#endif
