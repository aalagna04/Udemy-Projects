//
// Created by andrew on 8/25/20.
//

#include <iostream>
#include <vector>
#include "Account_Util.h"

//Account util helper functions
void display(const std::vector<Account*> &accounts){
    std::cout << "\n=================Accounts=================\n";
    for (const auto acc:accounts)
        std::cout<< *acc << std::endl;
}

void deposit(std::vector<Account*> &accounts, double amount){
    std::cout <<"\n=================Withdraw Account=================\n";
    for(auto acct:accounts){
        if(acct->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acct << std::endl;
        else
            std::cout << "Failed deposit of" << amount << " to " << *acct << std::endl;
    }
}
void withdraw(std::vector<Account*> &accounts, double amount) {
    std::cout << "\n=================Withdrawing from Accounts =================\n";
    for(auto acct:accounts){
        if(acct->withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << *acct << std::endl;
        else
            std::cout << "Failed withdrawal of" << amount << " amount from " << *acct << std::endl;
    }
}
