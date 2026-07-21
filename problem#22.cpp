#include <iostream>
#include <cmath>

using namespace std;

// This program to enter two values 'a' and 'b', and then calculate and print Circle Area Inscribed In An Isosceles Triangle.

void ReadTriangleValues(float &a, float &b)
{
    cout << "Please enter the value 'a': \n";
    cin >> a;

    cout << "Please enter the value 'b': \n";
    cin >> b;
}

float CalculateCircleAreaInscribedInAnIsoscelesTriangle(float a, float b)
{
    const float PI = 3.14;

    float circleArea = ( ( PI * pow(b, 2) ) / 4 ) * ( (2 * a - b) / (2 * a + b) );

    return circleArea;
}

void PrintCircleAreaInscribedInAnIsoscelesTriangle(float circleArea)
{
    cout << "Circle Area Inscribed In An Isosceles Triangle = " << circleArea << endl;
}

int main()
{
    float a, b;

    ReadTriangleValues(a, b);
    PrintCircleAreaInscribedInAnIsoscelesTriangle( CalculateCircleAreaInscribedInAnIsoscelesTriangle(a, b) );

    return 0;
}