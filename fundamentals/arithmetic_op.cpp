#include <iostream>
using namespace std;

/*  C++ Arithmetic Operators
    + addition
    - subtraction
    * multiplication
    / division
    % modulus (remainder)
*/

int main() {
    // Be mindful of output type -- see example below
    int a = 1;
    double b = 0.9;
    int intSum = a - b;
    double doubleSum = a - b;
    cout << intSum << endl;
    cout << doubleSum << endl;

    // increment
    intSum += 10;
    cout << intSum << endl;
    intSum++; 
    cout << intSum << endl;
    intSum--; 
    cout << intSum << endl;


    return 0;
}