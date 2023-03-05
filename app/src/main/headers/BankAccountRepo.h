//
// Created by Lewis on 04/03/2023.
//

#ifndef SIMPLEBANK_BANKACCOUNTREPO_H
#define SIMPLEBANK_BANKACCOUNTREPO_H

#include <vector>

using std::vector;
#include "BankAccount.h"

class BankAccountRepo {
private:
    vector<BankAccount> accounts;
public:
    BankAccountRepo()=default;
    bool save(BankAccount account);
    BankAccount getOneByCardNumber(string accNum);
};


#endif //SIMPLEBANK_BANKACCOUNTREPO_H
