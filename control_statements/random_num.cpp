#include <iostream>
#include <cstdlib>      // rand function
#include <ctime>         // seed for random generator

using namespace std;

/* C++ Random Number (Pseudo)
    + good randomness == less predictability

    clever trick for rand_num_gen:
        + using time and seed with null pointer

*/

int main() {
    srand(time(nullptr));       // seeds the random number generator (rand) -- pass null pointer to time

    int val1 = rand() % 10;     // 0 <= val1 < 10 (because modulus property)
    int val2 = rand() % 10 + 1;     // 1 <= val1 <= 10     
    
    // mimic die roll -- random number from 1-6
    for (int i=0; i<6; i++) {
        int dice = rand() % 6 + 1;
        cout << dice << endl;
    }
    
    return 0;
}