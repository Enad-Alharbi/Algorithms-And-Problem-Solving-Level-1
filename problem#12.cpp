#include <iostream>

using namespace std;

// This program will ask the user to enter two numbers, and then print the max number.

void ReadNumbers(int &number1, int &number2)
{
    cout << "Please enter number 1: \n";
    cin >> number1;

    cout << "Please enter number 2: \n";
    cin >> number2;
}

int CalculateMaxNumber(int number1,int number2)
{
    if (number1 > number2)
        return number1;
    else
        return number2;
}

void PrintMaxNumber(int max)
{
    cout << "The Maximum number is " << max;
}

int main()
{
    int number1, number2;

    ReadNumbers(number1, number2);
    PrintMaxNumber(CalculateMaxNumber(number1, number2));

    return 0;
}