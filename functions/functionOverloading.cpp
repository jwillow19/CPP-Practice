#include <iostream>
#include <string>
using namespace std;

/* Function Overloading
    the process of creating multiple functions with the same name but 
    different signatures 

    + function signature -- identifier of function + identifier of parameters
                            used to distinguish different overloads

    + consists of the name and paramtere list of a function
        + signature doesn't include return type
        + parameters may vary by num, type and order
*/

string getResult(string str1, string str2);
int getResult(int num1, int num2);
int getResult(int num);

int main()
{
    cout << "Script on Function Overloading" << endl;

    int resultNum = getResult(10, 20);
    string resultStr = getResult("hello", "world");
    int cube = getResult(3);

    cout << "resultNum is " << resultNum << endl;
    cout << "resultStr is " << resultStr << endl;
    cout << "cube is " << cube << endl;

    return 0;
}

int getResult(int num1, int num2)
{
    return num1 * num2;
}

string getResult(string str1, string str2)
{
    return str1 + " " + str2;
}

int getResult(int num)
{
    return num * num * num;
}