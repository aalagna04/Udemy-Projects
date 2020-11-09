//
// Created by andrew on 8/25/20.
//

#ifndef ACCOUNTS_ACCOUNT_UTIL_H
#define ACCOUNTS_ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

//Utility helper functions for Account
void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);


#endif //ACCOUNTS_ACCOUNT_UTIL_H
