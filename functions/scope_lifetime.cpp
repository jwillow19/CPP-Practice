#include <iostream>
using namespace std;


/* Variable Scoping & Lifetime

    variable scope  -- parts where a variable is accessible: global, local, static local variables
    lifetime        -- how long does a specific variable live
                        ie: local var gets removed when function finish execution
*/

void someFunction(int aParam);
double globalDouble = 3.14159;

int main()
{
    int localMain = 19;
    cout << "Local var localMain: " << localMain << endl;
    cout << "Global var globalDouble: " << globalDouble << endl;
    
    someFunction(15)
    
    return 0;
}

void someFunction(int aParam)
{
    int localSFunc = 5;
    cout << "Local var localSFunc: " << localSFunc << endl;
    cout << "aParam: " << aParam << endl;
    cout << "globalDouble in someFunction " << globalDouble << endl;
}