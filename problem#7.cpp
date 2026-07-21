#include <iostream>

using namespace std;

// This program will ask the user to enter a number and then print the half of the number.

int ReadNumber()
{
    int number;

    cout << "Please enter a number : \n";
    cin >> number;

    return number;
}

float CalculateHalfOfNumber(int number)
{
    float halfOfNumber = (float)number / 2;

    return halfOfNumber;
}

void PrintHalfOfNumber(float halfOfNumber)
{
    cout << "Half of " << (halfOfNumber*2) << " is " << halfOfNumber << endl;
}

int main()
{
    PrintHalfOfNumber(CalculateHalfOfNumber(ReadNumber()));

    return 0;
}