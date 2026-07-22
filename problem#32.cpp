#include <iostream>

using namespace std;

// This program will ask the user to enter a number N and power M, and then calculte and print the number N to the power M.

int ReadNumber()
{
    int number;

    cout << "Please enter the number: \n";
    cin >> number;

    return number;
}

int ReadPower()
{
    int power;

    cout << "Please enter the power: \n";
    cin >> power;

    return power;
}

int PowerOfM(int number, int power)
{
    if(power == 0)
        return 1;
    
    int result = 1;
    for(int i = 1; i <= power; i++)
    {
        result *= number;
    }

    return result;
}

int main()
{
    int result = PowerOfM(ReadNumber(), ReadPower());

    cout << "Result = " << result << endl;

    return 0;
}