#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* C++ functions 
    + function prototypes
    + return types & parameter list
*/

void printSomething();
double getRandNum();
void printNum(int a);
int adder(int num1, int num2);
double square(double num);

int main() {
    double random;

    printSomething();
    printNum(10);
    printNum(adder(10, 21)); 

    random = getRandNum();
    cout << "Random: " << random << endl;

    double squared = square(random);
    cout << "Squared: " << squared << endl;
    
    return 0;
}

void printSomething(){
    cout << "printSomething function invoked" << endl;
}
void printNum(int a){
    cout << "@printNum: number is " << a << endl;
}

int adder(int num1, int num2){
    return num1 + num2;
}
double getRandNum(){
    srand(time(nullptr));
    double random = rand() % 50 / 3.14159;
    return random;
}

double square(double num){
    return num * num;
}