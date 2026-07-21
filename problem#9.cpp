#include <iostream>

using namespace std;

// This program will ask the user to enter 3 numbers, and them sum and print them.

void ReadNumbers(int &num1, int &num2, int &num3)
{
    cout << "Please enter Number 1: \n";
    cin >> num1;

    cout << "Please enter Number 2: \n";
    cin >> num2;

    cout << "Please enter Number 3: \n";
    cin >>num3;
}

int CalculateSumOfThreeNumbers(int num1, int num2, int num3)
{
    return (num1 + num2 + num3);
}

void PrintSumOfThreeNumbers(int sum)
{
    cout << "Total sum of numbers = " << sum << endl;
}

int main()
{
    int num1, num2, num3;

    ReadNumbers(num1, num2, num3);
    PrintSumOfThreeNumbers(CalculateSumOfThreeNumbers(num1, num2, num3));

    return 0;
}