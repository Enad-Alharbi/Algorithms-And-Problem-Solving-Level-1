#include <iostream>

using namespace std;

// This program will ask the user to enter three numbers, and then print the max number.

void ReadNumbers(int &number1, int &number2, int &number3)
{
    cout << "Please enter number 1: \n";
    cin >> number1;

    cout << "Please enter number 2: \n";
    cin >> number2;

    cout << "Please enter number 3: \n";
    cin >> number3;
}

int MaxOf3Numbers(int number1, int number2, int number3)
{
    if(number1 > number2)
        if(number1 > number3)
            return number1;
        else
            return number3;
    else
        if(number2 > number3)
            return number2;
        else
            return number3;
}

void PrintMaxNumber(int max)
{
    cout << "The Maximum number is " << max;
}

int main()
{
    int number1, number2, number3;

    ReadNumbers(number1, number2, number3);
    PrintMaxNumber(MaxOf3Numbers(number1, number2, number3));

    return 0;
}