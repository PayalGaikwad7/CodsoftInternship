#include <iostream>
using namespace std;

double Addition(double dNo1, double dNo2)
{
    return dNo1 + dNo2;
}

double Subtraction(double dNo1, double dNo2)
{
    return dNo1 - dNo2;
}

double Multiplication(double dNo1, double dNo2)
{
    return dNo1 * dNo2;
}

double Division(double dNo1, double dNo2)
{
    if (dNo2 != 0)
    {
        return dNo1 / dNo2;
    }
    else
    {
        cout << "Enter second number other than zero." << endl;
        return 0.0;
    }
}

int main()
{
    int iChoice;
    double dNo1, dNo2;

    cout << "Calculator\n";

    cout << "Enter first number: ";
    cin >> dNo1;

    cout << "Enter second number: ";
    cin >> dNo2;

    cout << "Enter 1 for Addition \nEnter 2 for Subtraction \nEnter 3 for Multiplication \nEnter 4 for Division \n";
    cout << "Enter your choice : ";
    cin >> iChoice;

    switch (iChoice)
    {
    case 1:
        cout << "Result: " << Addition(dNo1, dNo2) << endl;
        break;
    case 2:
        cout << "Result: " << Subtraction(dNo1, dNo2) << endl;
        break;
    case 3:
        cout << "Result: " << Multiplication(dNo1, dNo2) << endl;
        break;
    case 4:
        cout << "Result: " << Division(dNo1, dNo2) << endl;
        break;
    default:
        cout << "Invalid operation." << endl;
    }

    return 0;
}
