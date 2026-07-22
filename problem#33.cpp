#include <iostream>

using namespace std;

// This program will ask the user to enter his mark grade, and then will print the grade letter (A, B, C, D, E, F).

int ReadGrade()
{
    int grade;

    cout << "Please enter your grade: \n";
    cin >> grade;

    return grade;
}

char PrintGradeLetter(int grade)
{
    if (grade >= 90 && grade <= 100)
        return 'A';
    else if(grade >= 80 && grade <= 89)
        return 'B';
    else if(grade >= 70 && grade <= 79)
        return 'C';
    else if(grade >= 60 && grade <= 69)
        return 'D';
    else if(grade >= 50 && grade <= 59)
        return 'E';
    else
        return 'F';
}

int main()
{
    int grade = ReadGrade();

    cout << "You got an " << PrintGradeLetter(grade) << " grade!\n";
    
    return 0;
}