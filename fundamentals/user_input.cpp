#include <iostream>
#include <string>
using namespace std;

/*  C++ User Input

    + getline   standard library function ni the string header file (consumes char/strings until newline char ("\n", "Enter")
    + cin       instance of istream class; what cin actually take in when user input something and press enter: <user_input)\n
    
    !! Everytime you ask for an int or non-string inputs you need to "consume" the newline character -- use
        cin.get()
*/
int main() {

    string name;  
    cout << "Input your name: " << endl;
    cin >> name;

    cout << "Your name is " << name << endl;
    return 0;
}