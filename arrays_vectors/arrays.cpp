#include <iostream>
#include <string>
#include <array>
using namespace std;

/* C++ Arrays
    array (built-in) - container of homogeneous data
    + dtype declaration -- array elements are type-homogeneous
    + size declaration --  during compile time and not runtime

    [Iterating an array]
    + for-loop for element-wise 
    
    [Array Class]
    array (class)  -- very similar to built-in arrays but is object-oriented (still requried size & type declaration)
    STL - Standard Template Library. Includes many things (container class)
        + Arrays == sequence containers
    
    array<dtype, size> Name{int, int, int, ...}
*/


int main() {

    // Defining built-in array
    const int ARRAY_SIZE=10;
    int intArrayOne[ARRAY_SIZE];
    int intArrayTwo[ARRAY_SIZE];

    // manual declare
    intArrayOne[0] = 0;
    intArrayOne[1] = 1;
    intArrayOne[2] = 1;
    intArrayOne[3] = 2;
    intArrayOne[4] = 5;
    cout << intArrayOne << endl;

    // loop declare
    intArrayTwo[0] = 0;  
    intArrayTwo[1] = 1;

    for (int i=2; i < ARRAY_SIZE; i++) {
        intArrayTwo[i] = intArrayTwo[i-2] + intArrayTwo[i-1];  
    }
    cout << intArrayTwo << endl;

    // Array of Strings
    string nameArray[5]{"john", "joe", "jane", "jack", "jill"};
    for (int i=0; i<5; i++){
                
        cout << "@for-loop on array, index-wise: " << nameArray[i] << endl;
    }

    // for-loop on array, element-wise
    for (string name : nameArray){
        cout << "@for-loop on array, element-wise: " << name << endl;
    }



    // Define Array with array class
    array<int, 5> arrOne{0, 0, 0, 0, 0};
    array<int, 5> arrTwo{1, 2};             // initializing with 1,2 ss first two elements and 0 the rest

    for (int a : arrOne) {
        cout << "arrOne @array Class: val: " << a << endl;
    }

        for (int a : arrTwo) {
        cout << "arrTwo @array Class: val: " << a << endl;
    }


    return 0;
}
 