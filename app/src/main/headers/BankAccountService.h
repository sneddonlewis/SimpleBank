//
// Created by Lewis on 04/03/2023.
//

#ifndef SIMPLEBANK_BANKACCOUNTSERVICE_H
#define SIMPLEBANK_BANKACCOUNTSERVICE_H


#include "BankAccountRepo.h"

class BankAccountService {
private:
    BankAccountRepo repo;
    long count;
public:
    BankAccountService(const BankAccountRepo& repo);
    BankAccount createAccount();
    BankAccount getAccountByCardNumber(const string cardNumber);
};


#endif //SIMPLEBANK_BANKACCOUNTSERVICE_H
