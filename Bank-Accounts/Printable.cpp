//
// Created by andrew on 9/22/20.
//

#include "Printable.h"

std::ostream &operator << (std::ostream &os, const Printable &obj){
    obj.print(os);
    return os;
}
