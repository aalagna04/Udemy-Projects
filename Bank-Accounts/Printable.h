//
// Created by andrew on 9/22/20.
//

#ifndef ACCOUNTS_PRINTABLE_H
#define ACCOUNTS_PRINTABLE_H
#include <iostream>

class Printable {
friend std::ostream &operator << (std::ostream &os, const Printable &obj);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~Printable() = default;

};


#endif //ACCOUNTS_PRINTABLE_H
