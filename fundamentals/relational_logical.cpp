#include <iostream>
using namespace std;

/*  C++ Relationals & Logical Operators

    # relational
    >   greater
    >=  greater or equal
    <   lesser
    <=  lesser or equal
    ==  equal-to
    !=  not equal-to

    # logical
    a && b      a and b
    a || b      a or b
    !a          not a
*/  

int main() {

    cout << boolalpha;
    int a = 15;
    int b = 20;
    bool areEqual = a == b;
    cout << (a > b) << endl;
    cout << areEqual << endl;
    
    
    bool isWarm = false;
    bool isCold = true;
    
    cout << "And: " << (isWarm && isCold) << endl;      // false
    cout << "Or: " << (isWarm || isCold) << endl;       // true
    cout << "Not: " << (!isWarm) << endl;               // true
    cout << "Not + And: " << (!isWarm && (isWarm && isCold)) << endl;               // false 

    return 0;
}