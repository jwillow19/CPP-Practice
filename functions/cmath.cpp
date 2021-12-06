#include <iostream>
#include <cmath>
using namespace std;
/* c++ cmath
    many built-in functions that have defined for us by the C++ langugage devs

    sqrt
    pow
    ceil
    floor

*/

int main()
{
    int power = pow(2, 3);
    int sqrtRes = sqrt(69);
    int ceilRes = ceil(19.8);
    int floorRes = floor(19.8);

    cout << power << endl;
    cout << sqrtRes << endl;
    cout << ceilRes << endl;
    cout << floorRes << endl;

    return 0;
}