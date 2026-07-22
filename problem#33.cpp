#include <iostream>

using namespace std;

// This program will ask the user to enter his mark grade, and then will print the grade letter (A, B, C, D, E, F).

int ReadNumberInRagne(int from, int to)
{
    int grade;
    do
    {
        cout << "Please enter your grade (0 - 100): \n";
        cin >> grade;
    } while (grade < from || grade > to);

    return grade;
}

char PrintGradeLetter(int grade)
{
    if (grade >= 90)
        return 'A';
    else if(grade >= 80)
        return 'B';
    else if(grade >= 70)
        return 'C';
    else if(grade >= 60)
        return 'D';
    else if(grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    int grade = ReadNumberInRagne(0, 100);

    cout << "You got an " << PrintGradeLetter(grade) << " grade!\n";
    
    return 0;
}