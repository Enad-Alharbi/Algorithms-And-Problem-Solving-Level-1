#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user to enter the values 'a' and 'd' and then calculate and print the rectange area through diagonal and side area of rectangle.

void ReadValues(float &a, float &d)
{
    cout << "Please enter 'a' value: \n";
    cin >> a;

    cout << "Please enter 'd' value: \n";
    cin >> d;
}

float CalculateRectangleAreaBySideAndDiagonal(float a, float d)
{
    float rectangleArea = a * sqrt( pow(d, 2) - pow(a, 2));
    return rectangleArea;
}

void PrintRectangleArea(float rectangleArea)
{
    cout << "Rectangle Area Through Diagonal and side area of rectangle = " << rectangleArea << endl;
}

int main()
{
    float a, d;

    ReadValues(a, d);
    PrintRectangleArea(CalculateRectangleAreaBySideAndDiagonal(a, d));

    return 0;
}