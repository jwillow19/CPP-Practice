#include <iostream>
#include <array>
using namespace std;

/* C++ Arrary data
    + read in user data and store in array
    + print daa out
*/

int main() {
    
    array<int, 5> userArray{};
    int val;

    for (int i=0; i<5; i++) {
        cout << "Enter integer for index " << i << endl;
        cin >> val;
        userArray[i] = val;
        cin.get();
    }

    cout << "User array is: " << endl;
    for (int num:userArray) {
        cout << num << endl;
    }

    return 0;
}