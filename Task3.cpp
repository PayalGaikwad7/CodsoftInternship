#include<iostream>
#include <time.h>
using namespace std;

int main()
{
    cout << "\n\t\t\tWelcome to The Number guessing game!!" << endl;
    cout << "\t\tThe number that you will be guessing must be from 1 to 100 " << endl;
    cout << "\tChances are limited based on the difficulty level you choose." << endl;

    while (true)
    {
        int ilevelNo;
        int iguessedNo;

        cout << "\nDifficulty Levels\n";
        cout << "\n1 : Easy\t";
        cout << "\n2 : Mediumt";
        cout << "\n3 : Difficult\t";
        cout << "\n0 : Exit the game\n"<< endl;
        
        cout << "Enter the difficulty level: ";
        cin >> ilevelNo;

        srand(time(0));
        int randomNo = (rand() % (100 - 1)) + 1;

        if (ilevelNo == 1)
        {
            cout << "\n 7 choices to find number between 1 to 100";
            int iChances = 7;
            for (int i = 1; i <= 7; i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> iguessedNo;
                if (iguessedNo == randomNo)
                {
                    cout << "Hurray! You guessed the right number";
                    break;
                }
                else if (iguessedNo > randomNo)
                {
                    cout << iguessedNo << " is greater than the random number";
                }
                else
                {
                    cout << iguessedNo << " is less than the random number";
                }
                iChances--;
                if (iChances == 0)
                {
                    cout << "\nBetter luck next time" << endl;
                    cout << randomNo << " is the number";
                }
            }
        }

        else if (ilevelNo == 2)
        {
            cout << "\n5 choices to find number between 1 to 100.";
            int iChances = 5;
            for (int i = 1; i <= 5; i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> iguessedNo;
                if (iguessedNo == randomNo)
                {
                    cout << "Hurray! You guessed the right number";
                    break;
                }
                else if (iguessedNo > randomNo)
                {
                    cout << iguessedNo << " is greater than the random number";
                }
                else
                {
                    cout << iguessedNo << " is less than the random number";
                }
                iChances--;
                if (iChances == 0)
                {
                    cout << "\nBetter luck next time" << endl;
                    cout << randomNo << " is the number";
                }
            }
        }

        else if (ilevelNo == 3)
        {
            cout << "\n3 choices to find number between 1 to 100.";
            int iChances = 3;
            for (int i = 1; i <= 3; i++)
            {
                cout << "\n\nEnter the number: ";
                cin >> iguessedNo;
                if (iguessedNo == randomNo)
                {
                    cout << "Hurray! You guessed the right number";
                    break;
                }
                else if (iguessedNo > randomNo)
                {
                    cout << iguessedNo << " is greater than the random number";
                }
                else
                {
                    cout << iguessedNo << " is less than the random number";
                }
                iChances--;
                if (iChances == 0)
                {
                    cout << "\nBetter luck next time" << endl;
                    cout << randomNo << " is the number";
                }
            }
        }
        else if (ilevelNo == 0)
        {
            exit(0);
        }
        else {
            cout << "Kindly select between (0,1,2,3)"<< endl;
        }

    }
}