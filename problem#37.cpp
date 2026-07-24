#include <iostream>

using namespace std;

// This program will ask the user to enter a number N, and keep asking the user to enter the number until the user enters -99, then print the sum on the screen.

float ReadNumber(string message)
{
    float number;

    cout << message << endl;
    cin >> number;

    return number;
}

float SumNumbersUntilMinusNinetyNine()
{
    int sum = 0, number = 0, counter = 1;

    do
    {
        number = ReadNumber("Please enter Number [" + to_string(counter) + "]: ");
        
        if (number == -99)
        {
            break;
        }

        sum += number;
        counter++;
    } while (number != -99);

    return sum;
}

void PrintSum(int sum)
{
    cout << "Sum of numbers = " << sum << endl;
}

int main()
{
    PrintSum(SumNumbersUntilMinusNinetyNine());

    return 0;
}