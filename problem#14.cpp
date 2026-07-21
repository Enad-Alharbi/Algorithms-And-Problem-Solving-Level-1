#include <iostream>

using namespace std;

// This program will ask the user to enter two numbers and then swap and print them.

void ReadNumbers(int &number1, int &number2)
{
    cout << "Please enter Number 1: \n";
    cin >> number1;

    cout << "Please enter Number 2: \n";
    cin >> number2;
}

void Swap2Numbers(int &number1, int &number2)
{
    int temp = number1;

    number1 = number2;
    number2 = temp;
}

void PrintNumbers(int number1, int number2)
{   
    cout << "\nNumber 1: " << number1 << endl;
    cout << "Number 2: " << number2 << "\n";
}

int main()
{
    int number1, number2;

    ReadNumbers(number1, number2);
    PrintNumbers(number1, number2);
    Swap2Numbers(number1, number2);
    PrintNumbers(number1, number2);
}