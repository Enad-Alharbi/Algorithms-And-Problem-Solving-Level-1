#include <iostream>

using namespace std;

// This program will ask the user to enter 3 marks and then print the average of marks, and print Pass if average of marks is >= 50, otherwise print FAIL.

enum enResult {Pass = 1, Fail = 2};

void ReadMarks(int &mark1, int &mark2, int &mark3)
{
    cout << "Please enter Mark 1: \n";
    cin >> mark1;

    cout << "Please enter Mark 2: \n";
    cin >> mark2;

    cout << "Please enter Mark 3: \n";
    cin >> mark3;
}

int SumOfThreeMarks(int mark1, int mark2, int mark3)
{
    return mark1 + mark2 + mark3;
}

float CalculateMarksAverage(int mark1, int mark2, int mark3)
{
    return (float)SumOfThreeMarks(mark1, mark2, mark3) / 3;
}

enResult CheckAverage(float marksAverage)
{
    if(marksAverage >= 50)
        return enResult::Pass;
    else
        return enResult::Fail;
}

void PrintResult(float marksAverage)
{
    cout << "The Average of entered marks = " << marksAverage << endl;

    if(CheckAverage(marksAverage) == enResult::Pass)
        cout << "PASS!\n";
    else
        cout << "FAIL!\n";
}



int main()
{
    int mark1, mark2, mark3;

    ReadMarks(mark1, mark2, mark3);
    PrintResult(CalculateMarksAverage(mark1, mark2, mark3));

    return 0;
}