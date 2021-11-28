#include <iostream>
#include <string>

using namespace std;

/* Average of Three project

    + prompt user for 3 doubles (num1. num2, num3)
    + calcualte the mean
    + print it out
*/

int main() {
    double num1;
    double num2;
    double num3;
    double avg;

    cout << "Enter num1: " << endl;
    cin >> num1;
    cin.get();

    cout << "Enter num2: " << endl;
    cin >> num2;
    cin.get();

    cout << "Enter num3: " << endl;
    cin >> num3;
    cin.get();

    avg = (num1 + num2 + num3)/3;
    cout << "Average: " << avg << endl;
    
    return 0;
}