#include <iostream>

using namespace std;

// This program will ask the user to enter two numbers Number1, Number2, and operation type (+, -, *, /) and then calculate number1 <operationType> number2.

void ReadNumbers(int &number1, int &number2)
{
    cout << "Please enter Number1: \n";
    cin >> number1;

    cout << "Please enter Number2: \n";
    cin >> number2;
}

void ReadOperationType(char &operationType)
{
    do
    {
        cout << "Please enter Operation Type (+, -, *, /): \n";
        cin >> operationType;
    } while (operationType != '+' && operationType != '-' && operationType != '*' && operationType != '/');

}

float Calculate(int number1, int number2, char operationType)
{
    switch (operationType){
        case '+':
            return number1 + number2;
        case '-': 
            return number1 - number2;
        case '*':
            return number1 * number2;
        case '/':
            return float(number1) / number2;
    }
}

int main()
{
    int number1, number2;
    char operationType;

    ReadNumbers(number1, number2);
    ReadOperationType(operationType);

    cout << number1 << " " << operationType << " " << number2 << " = " << Calculate(number1, number2, operationType);

    return 0;
}