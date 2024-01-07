#include <iostream>
using namespace std;

void Layout(char cBoard[3][3])
{
    cout << "-------------\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "| ";
        for (int j = 0; j < 3; ++j)
        {
            cout << cBoard[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool ChkWinner(char cBoard[3][3], char player)
{
    for (int i = 0; i < 3; ++i)
    {
        if ((cBoard[i][0] == player && cBoard[i][1] == player && cBoard[i][2] == player) ||
            (cBoard[0][i] == player && cBoard[1][i] == player && cBoard[2][i] == player))
        {
            return true;
        }
    }
    return ((cBoard[0][0] == player && cBoard[1][1] == player && cBoard[2][2] == player) ||
            (cBoard[0][2] == player && cBoard[1][1] == player && cBoard[2][0] == player));
}

bool chkTie(char cBoard[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (cBoard[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    char cGameboard[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int iRow, iCol;
    char cCurrPlayer = 'X';

    cout << "Welcome to the Tic Tac Toe Game!\n";

    while (true)
    {
        Layout(cGameboard);

        cout << "Player " << cCurrPlayer << ", enter your move (row and column): ";
        cin >> iRow >> iCol;

        if (iCol < 0 || iRow >= 3 || iCol < 0 || iCol >= 3 || cGameboard[iRow][iCol] != ' ')
        {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        cGameboard[iRow][iCol] = cCurrPlayer;

        if (ChkWinner(cGameboard, cCurrPlayer))
        {
            Layout(cGameboard);
            cout << "Player " << cCurrPlayer << " wins!\n";
            break;
        }

        if (chkTie(cGameboard))
        {
            Layout(cGameboard);
            cout << "It's a tie!\n";
            break;
        }
        cCurrPlayer = (cCurrPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
