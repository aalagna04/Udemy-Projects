//
// Created by andrew on 8/18/20.
//

#ifndef UNTITLED1_MYSTRING_H
#define UNTITLED1_MYSTRING_H


class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &obj);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    void display() const;

    int get_length() const;
    const char *get_str() const;



//Overloading operator member-methods
    //make lowercase
    Mystring operator-() const;
    //Concatenate
    Mystring operator+(const Mystring &rhs) const;
    //equal to
    bool operator==(const Mystring &rhs) const;
    //not equal to
    bool operator!=(const Mystring &rhs) const;
    //less than
    bool operator<(const Mystring &rhs) const;
    //greater than
    bool operator>(const Mystring &rhs) const;
    //concat and assign
    Mystring &operator+=(const Mystring &rhs);
    //
    Mystring operator*(int n) const;
    Mystring &operator*=(int n);
    Mystring &operator++();
    Mystring operator++(int);

};


#endif //UNTITLED1_MYSTRING_H
