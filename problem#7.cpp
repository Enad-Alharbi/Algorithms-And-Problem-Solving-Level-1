#include <iostream>

using namespace std;

// This program will ask the user to enter a number and then print the half of the number.

int ReadNumber()
{
    int number;

    cout << "Please enter a number : \n";
    cin >> number;

    return number;
}

float CalculateHalfNumber(int number)
{
    return (float)number / 2;;
}

void PrintResults(int number)
{
    string result = "Half of " + to_string(number) + " is " + to_string(CalculateHalfNumber(number));
    cout << result << endl;
}

int main()
{
    PrintResults(ReadNumber());

    return 0;
}