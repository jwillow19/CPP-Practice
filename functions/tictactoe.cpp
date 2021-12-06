#include <iostream>
#include <array>
#include <string>

using namespace std;

// ############################################ //
//          Implement TicTacToe in C++          //
// + array name == mem_addr first element
// + can still mutate array even if array is pass-by-value (bc a copy of its memaddr is still the same memaddr) 

void initializeGrid(string grid[3][3]);
void printGrid(string grid[3][3]);
void getUserinput(bool xTurn, string grid[3][3]);
string checkWinner(string grid[3][3]);

void checkMutate(int num);

int main()
{
    string grid[3][3];      // empty grid
    string winner = "";
    bool xTurn = true;
    int turnCount = 0;

    //the name of the array (without brackets) automatically represents the address of the first element in the array.  So, while the value of the array is passed by value 
    // the thing that is copied is the address of the array
    initializeGrid(grid);
    printGrid(grid);

    while (winner=="")
    {
        // edge-case: max-turn reached. end game.
        if (turnCount==9)
        {
            cout << "Max-step reached. Tied Game." << endl;
            return 0;
        }

        if (xTurn)
        {
            cout << "X-Turn" << endl;
        }
        else
        {
            cout << "O-Turn" << endl;
        }

        getUserinput(xTurn, grid);
        turnCount++;
        xTurn = !xTurn;
        printGrid(grid);
        string tmpWinner = checkWinner(grid);
        if (tmpWinner != " ")
        {
            cout << "Winner! " + tmpWinner << endl;
            return 0;
        }
    }
    return 0;    
}

void initializeGrid(string grid[3][3])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            grid[i][j] = " ";
        }
    }

}

void printGrid(string grid[3][3])
{
    for (int i=0; i<3; i++)
    {
        cout << "| ";
        for (int j=0; j<3; j++)
        {
            cout << grid[i][j] << " | ";

        }
        cout << endl;
        cout << "- - - - - - -" << endl;
    }
}

void getUserinput(bool xTurn, string grid[3][3])
{
    bool isValid = false;
    while (!isValid)
    {
        int userRow=-1;
        int userCol=-1;

        // prompt input for row
        while (userRow<1 || userRow>3)
        {
            cout << "(Row) Enter a number in [1,3]: " << endl;
            cin >> userRow;
            cin.get();
            if (userRow<1 || userRow>3)
            {
                cout << "Invalid input, try again" << endl;
                continue;
            }
        }

        // prompt input for column
        while (userCol<1 || userCol>3)
        {
            cout << "(Col) Enter a number in [1,3]: " << endl;
            cin >> userCol;
            cin.get();
            if (userCol<1 || userCol>3)
            {
                cout << "Invalid input, try again" << endl;
                continue;
            }
        }

        // check if spot is taken
        if (grid[userRow-1][userCol-1] != " ")
        {
            cout << "Spot taken on grid, try another combination" << endl;
            continue;
        }

        // valid input and spot not taken -- mutate grid
        if (xTurn)
        {
            grid[userRow-1][userCol-1] = "x";
            isValid = true;
        }
        else
        {
            grid[userRow-1][userCol-1] = "o";
            isValid = true;
        }
    }

    cout << "Turn end" << endl;
}

string checkWinner(string grid[3][3])
{
    // row & column wise
    for (int i=0; i<3; i++)
    {
        if (grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2])
        {
            return (grid[i][0]);
        }
        
        if (grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i])
        {
            return (grid[0][i]);
        }
    }

    // cross
    if (grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2])
    {
        return (grid[1][1]);
    }
    else if (grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0])
    {
        return (grid[1][1]);
    }

    return " ";
}


void checkMutate(int num)
{
    num = 9;
}