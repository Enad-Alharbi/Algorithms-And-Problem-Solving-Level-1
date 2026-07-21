#include <iostream>

using namespace std;

// This program will ask the user to enter a number N, and then will print numbers from 1 to N.

int ReadNumber()
{
    int number;
    
    cout << "Please enter your number: \n";
    cin >> number;

    return number;
}

void PrintNumbersFrom1ToN_UsingForLoop(int number)
{
    cout << "\n*------------Using For Loop------------*\n";
    for(int i = 1; i <= number; i++)
        cout << i << endl;
}

void PrintNumbersFrom1ToN_UsingWhileLoop(int number)
{
    int counter = 1;
    cout << "\n*------------Using While Loop------------*\n";
    while (counter <= number)
    {
        cout << counter << endl;
        counter++;
    }
}

void PrintNumbersFrom1ToN_UsingDoWhileLoop(int number)
{
    int counter = 1;
    cout << "\n*------------Using Do While Loop------------*\n";
    do
    {
        cout << counter << endl;
        counter++;
    } while (counter <= number);
}

int main()
{
    int n = ReadNumber();

    PrintNumbersFrom1ToN_UsingForLoop(n);
    PrintNumbersFrom1ToN_UsingWhileLoop(n);
    PrintNumbersFrom1ToN_UsingDoWhileLoop(n);

    return 0;
}