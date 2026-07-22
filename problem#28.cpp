#include <iostream>

using namespace std;

// This program will ask the user to enter a number N, and then sum odd numbers from 1 to N.

enum enEvenOrOdd {Odd = 1, Even = 2};

int ReadNumber()
{
    int number;

    cout << "Please enter your number: \n";
    cin >> number;

    return number;
}

enEvenOrOdd CheckEvenOrOdd(int number)
{
    if(number % 2 == 0)
        return enEvenOrOdd::Even;
    else
        return enEvenOrOdd::Odd;
}

int SumOddNumbersFrom1ToN_UsingForLoop(int number)
{
    cout << "\n*------------Using For Loop------------*\n";
    int sum = 0;

    for(int i = 1; i <= number; i++)
    {
        if(CheckEvenOrOdd(i) == enEvenOrOdd::Odd)
            sum += i;
    }

    return sum;
}

int SumOddNumbersFrom1ToN_UsingWhileLoop(int number)
{
    cout << "\n*------------Using While Loop------------*\n";
    int counter = 1;
    int sum = 0;

    while(counter <= number)
    {
        if(CheckEvenOrOdd(counter) == enEvenOrOdd::Odd)
            sum += counter;
        
        counter++;
    }

    return sum;
}

int SumOddNumbersFrom1ToN_UsingDoWhileLoop(int number)
{
    cout << "\n*------------Using Do While Loop------------*\n";
    int counter = 1;
    int sum = 0;

    do
    {
        if(CheckEvenOrOdd(counter) == enEvenOrOdd::Odd)
            sum += counter;
        
        counter++;
    } while (counter <= number);

    return sum;
}


int main()
{
    int number = ReadNumber();

    cout << SumOddNumbersFrom1ToN_UsingForLoop(number);
    cout << SumOddNumbersFrom1ToN_UsingWhileLoop(number);
    cout << SumOddNumbersFrom1ToN_UsingDoWhileLoop(number);

    return 0;
}


