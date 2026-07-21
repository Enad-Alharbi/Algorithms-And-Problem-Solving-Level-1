#include <iostream>

using namespace std;

// This program will ask the user to enter his age, and then validate if his/her age is between 18 and 45, and keep asking the user until he/she enters a valid age.

bool ValidateNumberInRange(int num, int from, int to)
{
    return (num >= from && num <= to);
}

int ReadAge()
{
    int age;

    cout << "Please enter your age: \n";
    cin >> age;
    while(!ValidateNumberInRange(age, 18, 45))
    {
        cout << "Invalid age, Please enter a valid age (between 18 and 45): \n";
        cin >> age;
    }

    return age;
}

void PrintResult(int age)
{
    cout << age << " is a valid age!\n";
}

int main()
{
    PrintResult(ReadAge());

    return 0;
}