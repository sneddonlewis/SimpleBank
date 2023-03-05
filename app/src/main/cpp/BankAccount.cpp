//
// Created by Lewis on 04/03/2023.
//
#include "BankAccount.h"

BankAccount::BankAccount(string bin, string accNum, int checkDigit, string pin, double balance
) : BIN(bin), accountNumber(accNum), checkDigit(checkDigit), PIN(pin), balance(balance) {
}

BankAccount::BankAccount(const BankAccount &account) {
    BIN = account.getBIN();
    accountNumber = account.getAccountNumber();
    checkDigit = account.getCheckDigit();
    PIN = account.getPIN();
    balance = account.getBalance();
}

string BankAccount::getBIN() const {
    return BIN;
}

string BankAccount::getAccountNumber() const {
    return accountNumber;
}

int BankAccount::getCheckDigit() const {
    return checkDigit;
}

string BankAccount::getCardNumber() const {
    return BIN + accountNumber + std::to_string(checkDigit);
}

string BankAccount::getPIN() const {
    return PIN;
}

double BankAccount::getBalance() const {
    return balance;
}