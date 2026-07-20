#include <iostream>

using namespace std;

// This program will ask the user to enter a number and then check if its Even or Odd.

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
    int number;

    cout << "Please enter a number: \n";
    cin >> number;

    return number;
}

enNumberType CheckNumberType(int num)
{
    int result = num % 2;

    if(result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType numberType)
{
    if(numberType == enNumberType::Even)
        cout << "Number is Even!\n";
    else
        cout << "Number is Odd!\n";
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));

    return 0;
}