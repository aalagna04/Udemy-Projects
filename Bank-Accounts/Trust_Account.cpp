//
// Created by andrew on 8/25/20.
//

#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
: Savings_Account {name, balance, int_rate}, num_withdrawls {0} {

}
//Deposit $50 bonus when you have less than $5000
bool Trust_Account::deposit(double amount){
    if(amount >= bonus_threshold)
        amount += bonus_amount;
    return Savings_Account::deposit(amount);
}

//Only 3 withdrawls allowed, each can be up to 20% of the account's value.
bool Trust_Account::withdraw(double amount) {
    if(num_withdrawls >= max_withdraws || (amount > balance * max_withdraw_percent) )
        return false;
    else {
        ++num_withdrawls;
        return Savings_Account::withdraw(amount);
    }
}

void Trust_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed;
    os << "[Trust_Account: " << name << ": " << balance << "]";
}

