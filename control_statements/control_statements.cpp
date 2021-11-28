#include <iostream>
using namespace std;

/*  C++ Control Statements

    + Sequential    inline execution (one-after-one)
    + Selection     decision statements (if/else)
    + Repetition    for/while loops
*/

int main() {
    double num1;
    double num2;

    cout << "Input num1: " << endl;
    cin >> num1;
    cin.get();
    
    cout << "Input num2: " << endl;
    cin >> num2;
    cin.get();

    // Sequential
    double sum = num1 + num2;
    cout << "Sum is " << sum << endl;

    // Selection
    if (sum >= 10) {
        cout << "Sum=" << sum << " is greater than 10";
    }
    else {
        cout << "Sum is less than 10" << endl;
    }

    // Loop
    for (sum; sum<10; sum++) {
        cout << "inside for-loop, increment sum=" << sum <<endl;
    }

    return 0;
}