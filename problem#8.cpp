#include <iostream>

using namespace std;

// This program will ask the user to enter his Mark and then Print PASS if mark >= 50 otherwise print Fail.

enum enResult {Pass = 1, Fail = 2};

int ReadMark()
{
    int mark;

    cout << "Please enter your mark: \n";
    cin >> mark;

    return mark;
}

enResult CheckMark(int mark)
{
    if (mark >= 50)
        return enResult::Pass;
    else
        return enResult::Fail;
}

void PrintResult(int mark)
{
    if (CheckMark(mark) == enResult::Pass)
        cout << "PASS!\n";
    else
        cout << "FAIL!\n"; 
}

int main()
{
    PrintResult(ReadMark());

    return 0;
}

