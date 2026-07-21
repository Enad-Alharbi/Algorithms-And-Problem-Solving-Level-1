#include <iostream>

using namespace std;

// This program will ask the user to enter a number N and then print numbers from N to 1.

int ReadNumber()
{
    int number;

    cout << "Please enter your number: \n";
    cin >> number;

    return number;
}

void PrintNumbersFromNTo1_UsingForLoop(int number)
{
    cout << "\n*------------Using For Loop------------*\n";
    for(int i = number; i >= 1; i--)
    {
        cout << i << endl;
    }
}

void PrintNumbersFromNTo1_UsingWhileLoop(int number)
{
    cout << "\n*------------Using While Loop------------*\n";
    int counter = number;
    while(counter >= 1)
    {
        cout << counter << endl;
        counter--;
    }
}

void PrintNumbersFromNTo1_UsingDoWhileLoop(int number)
{
    cout << "\n*------------Using Do While Loop------------*\n";
    int counter = number;
    do
    {
        cout << counter << endl;
        counter--;
    } while (counter >= 1);   
}

int main()
{
    int number = ReadNumber();

    PrintNumbersFromNTo1_UsingForLoop(number);
    PrintNumbersFromNTo1_UsingWhileLoop(number);
    PrintNumbersFromNTo1_UsingDoWhileLoop(number);

    return 0;
}