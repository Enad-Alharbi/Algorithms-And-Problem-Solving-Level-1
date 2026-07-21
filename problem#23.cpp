#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user to enter the values 'a', 'b', and 'c', and the calculate and print Circle Area Described around an arbitrary triangle.

void ReadTriangleValues(float &a, float &b, float &c)
{
    cout << "Please enter the value 'a': \n";
    cin >> a;

    cout << "Please enter the value 'b': \n";
    cin >> b;

    cout << "Please enter the value 'c': \n";
    cin >> c;
}

float CalculateCircleAreaDescribedAroundAnArbitraryTriangle(float a, float b, float c)
{
    const float PI = 3.14;
    float p = (a + b + c)/2;
    float t = (a * b * c) / ( 4 * sqrt( p * (p - a) * (p - b) * (p - c) ) );

    float circleArea = PI * pow(t, 2);

    return circleArea;
}

void PrintCircleAreaDescribedAroundAnArbitraryTriangle(float circleArea)
{
    cout << "Circle Area Described Around An Arbitrary Triangle = " << circleArea;
}

int main()
{
    float a, b, c;

    ReadTriangleValues(a, b, c);

    PrintCircleAreaDescribedAroundAnArbitraryTriangle(CalculateCircleAreaDescribedAroundAnArbitraryTriangle(a, b, c));

    return 0;
}