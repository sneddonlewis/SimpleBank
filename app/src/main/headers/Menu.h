//
// Created by Lewis on 04/03/2023.
//

#ifndef SIMPLEBANK_MENU_H
#define SIMPLEBANK_MENU_H


#include "BankAccountService.h"

class Menu {
private:
    BankAccountService service;
    int loginAttempt();
    void printMenu();
    void createAccount();
public:
    Menu(const BankAccountService& service);
    int run();
};


#endif //SIMPLEBANK_MENU_H
