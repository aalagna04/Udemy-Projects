//
// Created by andrew on 8/25/20.
//

#ifndef ACCOUNTS_CHECKING_ACCOUNT_H
#define ACCOUNTS_CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account : public Account {
private:
    static constexpr const char *def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Checking_Account() = default;
};


#endif //ACCOUNTS_CHECKING_ACCOUNT_H
