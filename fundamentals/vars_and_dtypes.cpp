#include <iostream>
#include <string>
using namespace std;

/*  C++ Variables and datatypes
        int(eger)
        double (float)
        char(arcter)
        string  (string of char)
        
        symbolic constant -- once defined cannot be changed
        const int v = 10
*/

int main() {

    // int(eger) & double (float, real number)
    int myInt;
    myInt = 21;
    double myDouble = 3.14159;
    double anotherDouble = 0.0619;
    const int cannotBeChanged = 404;
    
    cout << myInt << endl;
    cout << myDouble << endl;
    cout << anotherDouble << endl;

    // char(acter) -- single character literal, string -- "string" of chars 
    // 1. string type needs to be ""
    // 2. append string by piping
    char singleChar = 'a';
    string myName = "jeff";
    
    cout << "Hello " << myName << endl;

    // bool(ean)
    // 1. boolalpha (object in iostream) -- prints out "textual" boolean value (i.e.: prints true/false instead of 0/1); only need to pass to cout once
    bool isRaining = false;
    cout << isRaining << endl;
    
    cout << boolalpha
         << isRaining << endl;

    return 0;
}