//
// Created by andrew on 8/25/20.
//

#ifndef ACCOUNTS_SAVINGS_ACCOUNT_H
#define ACCOUNTS_SAVINGS_ACCOUNT_H
#include "Account.h"
#include <iostream>

class Savings_Account : public Account {
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.1;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Savings_Account() = default;
};


#endif //ACCOUNTS_SAVINGS_ACCOUNT_H
