#include <iostream>
#include "Mystring.h"
using namespace std;

int main() {
    cout << boolalpha << endl;
    Mystring a {"Hello "};
    a.display();
    cout << endl;
    Mystring b{"overloading\n"};
    b.display();
    cout << endl << (a!=b) << endl;
    a += b;
    a * 2;
    a.display();
    a++;
    a.display();
    cout << b << ++b << -b;
    cout << a.get_str();

}
