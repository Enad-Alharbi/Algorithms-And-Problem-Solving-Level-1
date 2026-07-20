#include <iostream>

using namespace std;

// This program will ask the user to enter a number and then check if its Even or Odd.

int ReadNumber()
{
    int number;

    cout << "Please enter a number: \n";
    cin >> number;

    return number;
}

void CheckEvenOrOdd(int number)
{
    if(number % 2 == 0)
    {
        cout << number << " is Even!\n";
    }
    else
    {
        cout << number << " is Odd!\n";
    }
}

int main()
{
    CheckEvenOrOdd(ReadNumber());

    return 0;
}