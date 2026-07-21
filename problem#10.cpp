#include <iostream>

using namespace std;

// This program will ask the user to enter 3 marks and then print the average of entered marks;

void ReadMarks(int &mark1, int &mark2, int &mark3)
{
    cout << "Please enter Mark 1: \n";
    cin >> mark1;

    cout << "Please enter Mark 2: \n";
    cin >> mark2;

    cout << "Please enter Mark 3: \n";
    cin >> mark3;
}

float CalculateMarksAverage(int mark1, int mark2, int mark3)
{
    return (float)(mark1+mark2+mark3) / 3;
}

void PrintMarksAverage(float marksAverage)
{
    cout << "The Average of entered marks = " << marksAverage << endl;
}

int main()
{
    int mark1, mark2, mark3;

    ReadMarks(mark1, mark2, mark3);
    PrintMarksAverage(CalculateMarksAverage(mark1, mark2, mark3));

    return 0;
}