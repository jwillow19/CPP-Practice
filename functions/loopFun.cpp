#include <iostream>
#include <array>
using namespace std;


int sumArray(int myArray[], int size);
int sumArrayTwo(array<int, 3>);
int sumArray(array<int, 5>, int& theSum);

int main()
{
    // for-loop on builtin array
    int numArr[] = {1, 2, 5, 4, 3};
    int sum = sumArray(numArr, 5);
    cout << sum << endl;

    // for-each loop on <array> object
    array<int, 3> dummyArr{ 0, 1, 18 };
    int sum2 = sumArrayTwo(dummyArr);
    cout << sum2 << endl;

    // overload sumArray with array & int (by-ref)
    array<int, 5> dumbArr{ 0, 1, 18, 1, 0};
    int start = 0;
    cout << start << endl;
    sumArray(dumbArr, start);
    cout << start << endl;

    return 0;
}

int sumArray(int myArray[], int size)
{
    int sum = 0;
    for (int i=0; i < size; i++)
    {
        sum += myArray[i];
    }
    return sum;
}

int sumArray(array<int, 5> theArray, int& theSum)
{
    for (auto num : theArray)
    {
        theSum += num;
    }
    return theSum;
}

int sumArrayTwo(array<int, 3> myArr)
{
    int sum = 0;
    for (auto num : myArr)
    {
        sum += num;
    }
    return sum;
}