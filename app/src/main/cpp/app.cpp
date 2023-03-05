/*
 * This C++ source file was generated by the Gradle 'init' task.
 */

#include <iostream>
#include <stdlib.h>
#include "app.h"
#include "BankAccount.h"
#include "Menu.h"

std::string SimpleBank::Greeter::greeting() {
    return std::string("Hello, World!");
}

int main () {
    SimpleBank::Greeter greeter;
    std::cout << greeter.greeting() << std::endl;
    
    BankAccount account("1234", "123456", 0, "1234", 0.0);
    std::cout << account.getAccountNumber() << std::endl;
    return Menu(BankAccountService(BankAccountRepo())).run();
}
