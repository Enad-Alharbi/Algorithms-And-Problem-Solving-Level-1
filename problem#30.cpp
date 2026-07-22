#include <iostream>

using namespace std;

// This program will ask the user to enter a number N, and then calculate and print the factorial of number N.

int ReadPositiveNumber(string message)
{
    int number;

    do
    {
        cout << message << endl;
        cin >> number;
    } while (number < 0);

    return number;
}

int Factorial(int number)
{
    int factorial = 1;

    for(int i = number; i >= 1; i--)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    cout << Factorial(ReadPositiveNumber("Please enter a positive number: "));

    return 0;
}

