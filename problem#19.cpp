#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user to enter the diameter 'd', and then calculate and print Circle Area Through Diameter.

float ReadDiameter()
{
    float diameter;

    cout << "Please enter the diameter 'd': \n";
    cin >> diameter;
    
    return diameter;
}

float CalculateCircleAreaThroughDiameter(float diameter)
{
    const float PI = 3.14;

    float circleArea = (PI * pow(diameter, 2)) / 4;

    return circleArea;
}

void PrintCircleAreaThroughDiameter(float circleArea)
{
    cout << "\nCircle Area Through Diameter = " << circleArea << endl;
}

int main()
{
    PrintCircleAreaThroughDiameter(CalculateCircleAreaThroughDiameter(ReadDiameter()));

    return 0;
}