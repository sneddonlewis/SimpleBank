//
// Created by Lewis on 04/03/2023.
//

#ifndef SIMPLEBANK_BANKACCOUNT_H

#include <string>
using std::string;

class BankAccount {
private:
    string BIN;
    string accountNumber;
    int checkDigit;
    string PIN;
    double balance;

public:
    BankAccount(string bin, string accNum, int checkDigit, string pin, double balance);
    BankAccount(const BankAccount &obj);
    string getBIN() const;
    string getAccountNumber() const;
    int getCheckDigit() const;
    string getCardNumber() const;
    string getPIN() const;
    double getBalance() const;
};
#define SIMPLEBANK_BANKACCOUNT_H

#endif //SIMPLEBANK_BANKACCOUNT_H
