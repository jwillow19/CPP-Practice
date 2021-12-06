#include <iostream>
#include <array>
using namespace std;

void minusOne(int num);
int fibonacci(int n);

int main()
{
    minusOne(10);

    int fib5 = fibonacci(5);
    cout << fib5 << endl;
    return 0;
}

void minusOne(int num)
{
    if (num >= 0)
    {
        cout << num << endl;
        return minusOne(num-1);
    }
}

int fibonacci(int n)
// returns nth fib num
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}