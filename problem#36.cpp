#include <iostream>

using namespace std;

// This program will ask the user to enter two numbers Number1, Number2, and operation type (+, -, *, /) and then calculate number1 <operationType> number2.

enum enOperationType {add = '+', subtract = '-', multiply = '*', divide = '/'};

float ReadNumber(string message)
{
    float number;
    
    cout << message << endl;
    cin >> number;

    return number;
}

enOperationType ReadOperationType()
{
    char operationType = '+';

    do
    {
        cout << "Please enter operation type (+, -, *, /): \n";
        cin >> operationType;
    } while (operationType != '+' && operationType != '-' && operationType != '*' && operationType != '/');
    
    return (enOperationType) operationType;
}

float Calculate(float number1, float number2, enOperationType operationType)
{
    switch (operationType){
        case enOperationType::add:
            return number1 + number2;
        case enOperationType::subtract: 
            return number1 - number2;
        case enOperationType::multiply:
            return number1 * number2;
        case enOperationType::divide:
            return number1 / number2;
        default:
            return number1 + number2;
    }
}

int main()
{
    float number1 = ReadNumber("Please enter Number1: ");
    float number2 = ReadNumber("Please enter Number2: ");

    enOperationType operationType = ReadOperationType();

    cout << number1 << " " << (char)operationType << " " << number2 << " = " << Calculate(number1, number2, operationType);

    return 0;
}