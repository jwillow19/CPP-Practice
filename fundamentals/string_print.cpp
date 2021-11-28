#include <iostream>
#include <string>

using namespace std;

/* Average of Three project

    + prompt user for 3 doubles (num1. num2, num3)
    + calcualte the mean
    + print it out
*/

int main() {
    string name;
    string fruit;
    string color;
    string outString;

    cout << "Enter a name: " << endl;
    cin >> name;

    cout << "Enter a color: " << endl;
    cin >> color;

    cout << "Enter a fruit: " << endl;
    cin >> fruit;

    cout << name << " " << color << " " << fruit << endl;
    
    return 0;
}