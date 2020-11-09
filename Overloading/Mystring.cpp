//
// Created by andrew on 8/18/20.
//
#include <iostream>
#include "Mystring.h"
#include <cstring>
//No-arg constructor
Mystring::Mystring()
: str{nullptr}{
    str = new char[1];
    *str = '\0';
}
//Overload const.
Mystring::Mystring(const char *s)
: str{nullptr} {
    if(s== nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}
//Copy const.
Mystring::Mystring(const Mystring &source)
:str{source.str} {
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}

//Move const.
Mystring::Mystring( Mystring &&source)
: str(source.str){
    source.str = nullptr;
}

Mystring::~Mystring(){
    delete [] str;
}

Mystring &Mystring::operator=(Mystring &&rhs) {
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

Mystring &Mystring::operator=(const Mystring &rhs){
    if(this == &rhs)
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(str, rhs.str);
    return *this;
}



void Mystring::display() const {
    std::cout << str;
}
//get length method
int Mystring::get_length() const {return std::strlen(str);}
//get string method
const char *Mystring::get_str() const {return str;}

std::ostream &operator<<(std::ostream &os, const Mystring &obj){
    os << obj.get_str();
    return os;
}

std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char [1000];
    in >> buff;
    rhs = Mystring(buff);
    delete [] buff;
    return in;
}



//Make lowercase
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str) + 1];
    std::strcpy(buff, str);
    for(size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}
//Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + strlen(rhs.str) +1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//equal
bool Mystring::operator==(const Mystring &rhs) const{
    return(std::strcmp(str, rhs.str)==0);
}
//not equal
bool Mystring::operator!=(const Mystring &rhs) const{
    return std::strcmp(str, rhs.str) == 0;
}
//less than
bool Mystring::operator<(const Mystring &rhs) const{
    return(std::strcmp(str, rhs.str)<0);
}
//greater than
bool Mystring::operator>(const Mystring &rhs) const{
    return(std::strcmp(str, rhs.str)>0);
}
//concat and assign,
Mystring &Mystring::operator+=(const Mystring &rhs){
    *this = *this + rhs;
    return *this;
}

Mystring Mystring::operator*(int n) const{
    Mystring temp;
    for(int i =1; i<=n;i++)
        temp = temp + *this;
    return temp;
}
Mystring &Mystring::operator*=(int n){
    *this = *this * n;
    return *this;
}
//pre-call change to uppercase
Mystring &Mystring::operator++(){
    for (size_t i =0; i<strlen(str); i++)
        str[i]=std::toupper(str[i]);
    return *this;
}
//post-call change to uppercase
Mystring Mystring::operator++(int) {
    Mystring temp {*this};
    operator++();
    return temp;
}

