#include <iostream>
using namespace std;

/*  C++ Control Statements

    + Sequential    inline execution (one-after-one)
    + Selection     decision statements (if/else/switch)
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
    int sum = num1 + num2;
    cout << "@sequential: sum=" << sum << endl;

    // Selection: if/else-if/else/switch
    switch (sum) {
        case 10:
            cout << "@switch: Eactly 10" << endl;
            break;
        case 5:
            cout << "Exactly 5" << endl;
            break;
        case 1:
            cout << "Exactly 1" << endl;
            break;
        default:
            cout << "No matcing case -- going to if/else cases" << endl;
    }

    if (sum > 10) {
        cout << "Greater than 10" << endl;
    }
    else if (sum > 5) {
        cout << "Less than 10 but greater than 5" << endl;
    }
    else {
        cout << "Sum is less than or equal 5" << endl;
    }

    // Loop: for, while, do-while
    //  while       -- pre-test  (test befor running)
    //  do-while    -- post-test (guarantee to run do-block at least once then test for while condition)
    for (sum; sum<10; sum++) {
        cout << "@for: sum < 10, sum++ sum=" << sum <<endl;
    }

    while (sum > 5) {
        sum--;
        if (sum == 10) {
            cout << "@while-continue at sum=10" << endl;
            continue;
        }
        cout << "@while: sum>5 sum-- sum=" << sum << endl;
    }

    do {
        sum++;
        cout << "@do-while: sum<20 sum++ sum=" << sum << endl;
        if (sum == 10) {
            cout << "@do-while break at sum=10" << endl;
            break;
        }
    } while (sum < 20);

    return 0;
} 