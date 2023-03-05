//
// Created by Lewis on 04/03/2023.
//

#include "BankAccountService.h"
#include "Luhn.h"

BankAccountService::BankAccountService(const BankAccountRepo& repo) : repo(repo) {
    count = 0;
}

BankAccount BankAccountService::createAccount() {
    count++;
    // TODO Decide if BIN is constant
    string bin = "4000";
    string accNum = std::to_string(count);
    accNum.insert(0, 11 - accNum.length(), '0');
    // TODO Check digit algorithm
    int check = Luhn::generateLuhnCheckDigit(accNum);
    // TODO Generate PIN
    string pin = "1234";
    double balance = 0.0;
    BankAccount account(bin, accNum, check, pin, balance);
    repo.save(account);
    return account;
}

BankAccount BankAccountService::getAccountByCardNumber(const string cardNumber) {
    return repo.getOneByCardNumber(cardNumber);
}
