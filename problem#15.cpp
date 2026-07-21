#include <iostream>

using namespace std;

// This program will ask the user to enter the values a and b and then calculate rectangle area and print it on the screen.

void ReadValues(float &a, float &b)
{
    cout << "Please enter 'a' value: \n";
    cin >> a;

    cout << "Please enter 'b' value: \n";
    cin >> b;
}

float CalculateRectangleArea(float a, float b)
{
    return a * b;
}

void PrintRectangleArea(float rectangleArea)
{
    cout << "\nRectangle Area = " << rectangleArea << "\n\n";
}

int main()
{
    float a, b;

    ReadValues(a, b);
    PrintRectangleArea(CalculateRectangleArea(a,b));

    return 0;
}