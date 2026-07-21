#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user to enter the value 'r' and then calculate and print Circle area.

float ReadRadious()
{
    float r;

    cout << "Please enter 'r' value: \n";
    cin >> r;

    return r;
}

float CalculateCircleArea(float r)
{
    const float PI = 3.14;

    float circleArea = PI * pow(r, 2);

    return circleArea;
}

void PrintCircleArea(float circleArea)
{
    cout << "Circle Area = " << circleArea << endl;
}

int main()
{
    PrintCircleArea(CalculateCircleArea(ReadRadious()));

    return 0;
}