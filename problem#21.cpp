#include <iostream>
#include <cmath>

using namespace std;

// This program will ask the user to enter the Circumference 'L', and then calculate and print the Circle Area Along The Circumference.

float ReadCircumference()
{
    float l;

    cout << "Please enter the value of Circumference 'L': \n";
    cin >> l;

    return l;
}

float CalculateCircleAreaAlongTheCircumference(float l)
{
    const float PI = 3.14;
    
    float circleArea = pow(l, 2)/(4 * PI);

    return circleArea;
}

void PrintCircleAreaAlongTheCircumference(float circleArea)
{
    cout << "Circle Area Along The Circumference = " << circleArea << endl;
}

int main()
{
    PrintCircleAreaAlongTheCircumference(CalculateCircleAreaAlongTheCircumference(ReadCircumference()));

    return 0;
}