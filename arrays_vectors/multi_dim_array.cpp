#include <iostream>
#include <vector>
#include <array>
using namespace std;


/* C++ Multi-dim Arrays
    2D Matrix example: arr[0][2] == first row third column

*/

int main() {

    // using built-in array to construct a 2x3 matrix
    int mat[2][3] {
        {1, 2, 3},
        {19, 20, 21}
    };

    // value assignment 
    cout << "mat[2][3] before assignment: " << mat[1][2] << endl;
    mat[1][2] = 10;
    cout << "mat[2][3] after assignment: " << mat[1][2] << endl;

    // 2d array iteration -- nested forloop
    for (int row=0; row<2; row++){
        for (int col=0; col<3; col++) {
            cout << mat[row][col] << " ";
            // cout << "row: " << row << " col: " << col << " val: " << mat[row][col] << endl;
        }
        cout << endl;
    }



    return 0;
}