#include <iostream>
#include <vector>
#include "Savings_Account.h"

#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include <memory>
using namespace std;
int main() {



Checking_Account Frank {"Chico", 1000};
cout << Frank << endl;

Account* trust = new Trust_Account("Albert");
cout << *trust << endl;

Account *p1 = new Savings_Account("Drew",50000);
Account *p2 = new Checking_Account("Rachel",90000);

std::vector<Account*> accounts {p1,p2};
display(accounts);
deposit(accounts, 1000);
withdraw(accounts, 500);
display(accounts);


}
