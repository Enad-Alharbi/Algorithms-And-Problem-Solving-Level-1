#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user to enter a number N, and then print the number N to the power of 2, 3 , and 4.

int ReadNumber()
{
    int number;

    cout << "Please enter your number: \n";
    cin >> number;

    return number;
}

void PrintNumberToPower2_3_4(int number)
{
    cout << number << " ^ 2 = " << number * number << endl;
    cout << number << " ^ 3 = " << number * number * number << endl;
    cout << number << " ^ 4 - " << number * number * number * number << endl;
}

int main()
{
    PrintNumberToPower2_3_4(ReadNumber());

    return 0;
}