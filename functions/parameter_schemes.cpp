#include <iostream>
using namespace std;

/*  C++: Parameter Passing Schemes
        
    pass-by-value           -- makes a copy of the input variable into the function and use it as argument. 
                                It is not the same variable as the input variable.
    pass-by-reference       -- passing the original variable and use it as argument. Reference to variable's 
                                memory.

*/

void addOne(int num);
void addOneByRef(int& num);
void threeTimesN(int num1, int& num2);

int main(){
    int myNum = 20;
    addOne(myNum);
    cout << "after @addOne: myNum=" << myNum << endl;   // pass-by-value -- addOne does not change myNum's value.

    int anotherNum = 30;
    addOneByRef(anotherNum);
    cout << "after addOneByRef: anotherNum=" << anotherNum << endl;
    
    int numOne = 2;
    int numTwo = 13;
    cout << "before threesTimeN: numTwo=" << numTwo << endl;
    threeTimesN(numOne, numTwo);
    cout << "after threesTimeN: numTwo=" << numTwo << endl;

    return 0;
}

void addOne(int num){
    num = 10;
}

void addOneByRef(int& num){
    num = 100;
}

void threeTimesN(int num1, int& num2){
    num2 = num1 * 3;
}