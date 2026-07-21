#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user to enter the Square Side 'A' and then Calculate and print Circle Area Inscribed In A Square.

float ReadSquareSide()
{
    float a;

    cout << "Please enter the square side 'a': \n";
    cin >> a;

    return a;
}

float CalculateCircleAreaInscribedInASquare(float a)
{
    const float PI = 3.14;

    float circleArea = (PI * pow(a, 2))/4;

    return circleArea;
}

void PrintCircleAreaInscribedInASquare(float circleArea)
{
    cout << "Circle Area Inscribed In A Square = " << circleArea << endl;
}

int main()
{
    PrintCircleAreaInscribedInASquare(CalculateCircleAreaInscribedInASquare(ReadSquareSide()));

    return 0;
}