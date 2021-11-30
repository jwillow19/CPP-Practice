#include <iostream>
using namespace std;

/* C++ Odds & Evens
    + loop through ints 0-50 (inclusive)
    + print out whether each int is odd or even --  "____ is odd" etc
*/

int main() {
    for (int i=0; i<51; i++) {
        if (i%2 == 0) {
            cout << i << " is even." << endl;
        }
        else {
            cout << i << " is odd." << endl;
        }
    }
    return 0;
}