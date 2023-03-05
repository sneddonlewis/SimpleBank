/*
 * @author Lewis Sneddon 05/03/2023.
 */

#include <string>
#include "Luhn.h"

bool Luhn::checkLuhnAlgorithm(std::string cardNumber)
{
    // TODO implement
    return true;
}

int Luhn::generateLuhnCheckDigit(std::string cardNumber)
{
    int result = 0;
    for (int i = 0; i < cardNumber.length(); i++)
    {
        char *current = &cardNumber[i];
        int digit = std::atoi(current);
        if (i % 2 == 0)
        {
            int doubleDigit = digit * 2 > 9 ? digit * 2 - 9 : digit * 2;
            result += doubleDigit;
            continue;
        }
    }
    return result % 10;
}