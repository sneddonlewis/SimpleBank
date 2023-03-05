//
// Created by Lewis on 04/03/2023.
//

#ifndef SIMPLEBANK_ACCOUNTMENU_H
#define SIMPLEBANK_ACCOUNTMENU_H

#include "BankAccount.h"

class AccountMenu
{
private:
    BankAccount account;

    void printMenu();
    void printBalance();

public:
    AccountMenu(BankAccount account);

    int run();
};

#endif // SIMPLEBANK_ACCOUNTMENU_H
