#include <iostream>

using namespace std;

// This program will ask the user to enter a number N, and keep asking the user to enter the number until the user enters -99, then print the sum on the screen.

int ReadNumber()
{
    int number;

    cout << "Please enter a number: \n";
    cin >> number;

    return number;
}

int SumNumbersUntilMinusNinetyNine(int number)
{
    int sum = 0;

    while(number != -99)
    {
        sum += number;
        number = ReadNumber();
    }

    return sum;
}

void PrintSum(int sum)
{
    cout << "Sum of numbers = " << sum << endl;
}

int main()
{
    PrintSum(SumNumbersUntilMinusNinetyNine(ReadNumber()));

    return 0;
}