#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* [Practice] Parallel Vectors
    + two parallel vectors storing different dtype for the same person
*/

int main(){
    vector<string> nameVec{};
    vector<int> ageVec{};

    string name;
    int age;

    for (int i=0; i<2; i++){
        cout << "Enter a name: " << endl;
        cin >> name;
        
        cout << "Enter an age: " << endl;
        cin >> age;
        cin.get();

        cout << name << " is " << age << " years old.";
        cout << endl;
    }
    return 0;
}