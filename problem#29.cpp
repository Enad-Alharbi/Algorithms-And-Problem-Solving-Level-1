#include <iostream>

using namespace std;

// This program will ask the user to enter a number N, and then sum the even numbers from 1 to N.

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
    if (number % 2 == 0)
        return enEvenOrOdd::Even;
    else
        return enEvenOrOdd::Odd;
}

int SumEvenNumbersFrom1ToN_UsingForLoop(int number)
{
    cout << "\n*------------Using For Loop------------*\n";
    int sum = 0;

    for(int i = 0; i <= number; i++)
    {
        if(CheckEvenOrOdd(i) == enEvenOrOdd::Even)
            sum += i;
    }

    return sum;
}

int SumEvenNumbersFrom1ToN_UsingWhileLoop(int number)
{
    cout << "\n*------------Using While Loop------------*\n";
    int sum = 0;
    int counter = 1;

    while(counter <= number)
    {
        if(CheckEvenOrOdd(counter) == enEvenOrOdd::Even)
            sum += counter;

        counter++;
    }

    return sum;
}

int SumEvenNumbersFrom1ToN_UsingDoWhileLoop(int number)
{
    cout << "\n*------------Using Do While Loop------------*\n";
    int sum = 0;
    int counter = 1;

    do
    {
        if(CheckEvenOrOdd(counter) == enEvenOrOdd::Even)
            sum += counter;
        
        counter ++;
    } while (counter <= number);

    return sum;
}

int main()
{
    int number = ReadNumber();
    
    cout << SumEvenNumbersFrom1ToN_UsingForLoop(number);
    cout << SumEvenNumbersFrom1ToN_UsingWhileLoop(number);
    cout << SumEvenNumbersFrom1ToN_UsingDoWhileLoop(number);

    return 0;
}