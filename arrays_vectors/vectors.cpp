#include <iostream>
#include <string>
#include <array>
#include <vector>
using namespace std;

/* C++ Vectors
    vectors are sequential containers like array 
    + consists of contiguous memory just like arrays
    + not limited to fixed size. Can dynamically resize to accomdate for new elements
    + do not need to specify size during initialization
    + type-homogeneous

    initialization:
        vector<dtype> <variable_name>
        vector<dtype> <variable_name>(size)

    vector methods
        + vec.push_back(val)    -- list.append(val)
        + vec.front()           -- list[0]
        + vec.back()            -- list[-1]
        + vec.pop_back()        -- list.pop()
        + vec.begin()           -- returns an iterator to the beginning of the sequence container. id(vec[0])
        + vec.insert(insert_index, element_to_insert)

*/

int main() {
    vector<int> vecOne;         // vector of dynamic size
    vector<string> vecTwo(3);   // vector of size three

    cout << "Vector: Initialization" << endl;

    // push_back to append elements to array
    vecOne.push_back(1);
    vecOne.push_back(2);
    vecOne.push_back(3);
    cout << "vecOne size: " << vecOne.size() << endl;

    // index-wise assignments
    vecTwo[0] = "first";
    vecTwo[1] = "second";
    vecTwo[2] = "third";
    vecTwo.push_back("fourth");
    cout << "@vecTwo.size " << vecTwo.size() << endl;

    for (string order : vecTwo){
        cout << "@vecTwo: " << order << endl;
    }

    cout << "vecTwo.front() " << vecTwo.front() << endl;
    cout << "vecTwo.back(): " << vecTwo.back() << endl;

    vecTwo.pop_back();
    cout << "vecTwo.pop_back() now vecTwo back is " << vecTwo.back() << endl;

    vecTwo.insert(vecTwo.begin(), "zeroth");
    cout << "vecTwo.insert() now vecTwo front is " << vecTwo.front() << endl;

    return 0;
}