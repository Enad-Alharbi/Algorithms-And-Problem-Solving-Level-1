#include <iostream>

using namespace std;

// This program will ask the user to enter a number N, and then calculate and print the factorial of number N.

int ReadPositiveNumber()
{
    int number;

    do
    {
        cout << "Please enter a positive number: \n";
        cin >> number;
    } while (number < 0);

    return number;
}

int CalculateFactorial_UsingForLoop(int number)
{
    cout << "\n*------------Using For Loop------------*\n";
    
    int factorial = 1;

    for(int i = number; i >= 1; i--)
    {
        factorial *= i;
    }

    return factorial;
}

int CalculateFactorial_UsingWhileLoop(int number)
{
    cout << "\n*------------Using While Loop------------*\n";

    int factorial = 1;
    int counter = number;

    while(counter >= 1)
    {
        factorial *= counter;
        counter--;
    }
    
    return factorial;
}

int CalculateFactorial_UsingDoWhileLoop(int number)
{
    cout << "\n*------------Using Do While Loop------------*\n";

    int factorial = 1;
    int counter = number;

    do
    {
        factorial *= counter;
        counter--;
    } while (counter >= 1);

    return factorial;
}

int main()
{
    int number = ReadPositiveNumber();

    cout << CalculateFactorial_UsingForLoop(number);
    cout << CalculateFactorial_UsingWhileLoop(number);
    cout << CalculateFactorial_UsingDoWhileLoop(number);

    return 0;
}

