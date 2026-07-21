#include <iostream>

using namespace std;

// This program will ask the user to enter the values 'a' and 'h' and then calculate and print triangle area.

void ReadValues(float &a, float &h)
{
    cout << "Please enter value 'a': \n";
    cin >> a;

    cout << "Please eneter value 'h': \n";
    cin >> h;
}

float CalculateTriangleArea(float a, float h){
    float triangleArea = (a/2) * h;
    
    return triangleArea;
}

void PrintTriangleArea(float triangleArea)
{
    cout << "Triangle Area = " << triangleArea << endl;
}

int main()
{
    float a, h;

    ReadValues(a, h);
    PrintTriangleArea((CalculateTriangleArea(a,h)));

    return 0;
}