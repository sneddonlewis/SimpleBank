//
// Created by Lewis on 04/03/2023.
//

#include "BankAccountRepo.h"

bool BankAccountRepo::save(BankAccount account)
{
    accounts.push_back(account);
    return true;
}

BankAccount BankAccountRepo::getOneByCardNumber(string cardNum)
{
    for (auto acc : accounts)
    {
        if (acc.getCardNumber() == cardNum)
        {
            return acc;
        }
    }
}