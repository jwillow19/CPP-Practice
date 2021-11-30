#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* [Practice] Guess the number

    + program randomly selects a number [1, 100]
    + user tries to guess the number & count number of guesses

    + decision case:
        1. user_num > comp_num
        2. user_num < comp_num
        3. user_num == comp_num
        4. user_num < 1 || user_name > 100
*/

int main() {
    
    srand(time(nullptr));
    int compNum = rand() % 100 + 1;
    int upperBound = 100;
    int lowerBound = 1;

    bool guessCorrect = false;
    int guessCount = 0;
    int userNum; 


    while (!guessCorrect) {

        cout << "Enter a number between " << lowerBound << "-" << upperBound << endl;
        cin >> userNum;
        cin.get();

        // check if userNum in [1, 100]
        if (userNum < lowerBound || userNum > upperBound) {
            cout << "The number you guessed is invalid, try again: " << endl;
            guessCount++;
            continue;
        }
        
        if (userNum > compNum) {
            cout << "The number you guessed is too high, try again: " << endl;
            guessCount++;
            upperBound = userNum;
            continue;
        }        
        else if (userNum < compNum) {
            cout << "The number you guessed is too low, try again: " << endl;
            guessCount++;
            lowerBound = userNum;
            continue;
        }   
        else {
            guessCount++;
            break;
        }
    }

    cout << "Correct after " << guessCount << "tries!" << endl;
    return 0;
}