//
// Created by Lewis on 04/03/2023.
//
#include <iostream>

using std::cin;
#include "Menu.h"
#include "AccountMenu.h"

Menu::Menu(const BankAccountService& service) : service(service) {}

int Menu::run() {
    printMenu();
    int choice;
    cin >> choice;
    switch (choice) {
        case 0:
            return 1;
        case 1:
            createAccount();
            break;
        case 2:
            auto exitStatus = loginAttempt();
            if (exitStatus == 1) {
                 return 1;
            }
    }
    return run();
}

void Menu::printMenu() {
    printf("1. Create an account\n2. Log into account\n0. Exit\n");
}

void Menu::createAccount() {
    auto acc = service.createAccount();

    printf("Your card has been created\nYour card number:\n%s\n", acc.getCardNumber().c_str());
    printf("Your card PIN:\n%s\n", acc.getPIN().c_str());
}

int Menu::loginAttempt() {
    printf("Enter your card number:\n");
    string cardNumber;
    cin >> cardNumber;
    printf("Enter your PIN:\n");
    string pin;
    cin >> pin;
    BankAccount account = service.getAccountByCardNumber(cardNumber);
    if (account.getPIN() == pin) {
        printf("You have successfully logged in\n\n");
        return AccountMenu(account).run();
    } else {
        printf("Wrong card number or PIN!\n");
        // TODO restrict login attempts
        return loginAttempt();
    }
}
