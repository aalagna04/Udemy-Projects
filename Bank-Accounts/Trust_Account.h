//
// Created by andrew on 8/25/20.
//

#ifndef ACCOUNTS_TRUST_ACCOUNT_H
#define ACCOUNTS_TRUST_ACCOUNT_H

#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
    private:
        static constexpr const char *def_name = "Unnamed Trust Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_int_rate = 0.0;
        static constexpr double bonus_amount = 50.0;
        static constexpr double bonus_threshold = 5000.0;
        static constexpr int max_withdraws = 3;
        static constexpr double max_withdraw_percent = 0.2;
protected:
    int num_withdrawls;
public:
        Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

        bool deposit(double amount) override;

        bool withdraw(double amount) override;
        virtual void print(std::ostream &os) const override;
        virtual ~Trust_Account() = default;


    };



#endif //ACCOUNTS_TRUST_ACCOUNT_H
