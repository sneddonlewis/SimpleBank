//
// Created by Lewis on 04/03/2023.
//
#include <iostream>

using std::cin;
#include "AccountMenu.h"

AccountMenu::AccountMenu(BankAccount account) : account(account)
{
}

int AccountMenu::run()
{
    printMenu();

    int choice;
    cin >> choice;
    switch (choice)
    {
    case 0:
        return 1; // TODO normal exit status, use enum
    case 1:
        printBalance();
        break;
    case 2:
        return 2; // just log out, exit would be 1. Use an enum
    }

    return run();
}

void AccountMenu::printMenu()
{
    printf("1. Balance\n2. Log out\n0. Exit\n");
}

void AccountMenu::printBalance()
{
    printf("Balance: %d\n\n", account.getBalance());
}
