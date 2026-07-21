#include <iostream>

using namespace std;

// This program will ask the user to enter his age, and then validate if his/her age is between 18 and 45, and keep asking the user until he/she enters a valid age.


int ReadAge()
{
    int age;

    cout << "Please enter Age between 18 and 45: \n";
    cin >> age;

    return age;
}

bool ValidateNumberInRange(int num, int from, int to)
{
    return (num >= from && num <= to);
}

int ReadUntilAgeBetween()
{
    int age = 0;

    do
    {
       age = ReadAge(); 
    } while (!ValidateNumberInRange(age, 18, 45));

    return age;
}

void PrintResult(int age)
{
    cout << "Your age is: " << age << endl;
}

int main()
{
    PrintResult(ReadUntilAgeBetween());

    return 0;
}