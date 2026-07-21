#include <iostream>

using namespace std;

// This program will ask the user to enter his age, and then validate if his/her age is between 18 and 45.

int ReadAge()
{
    int age;

    cout << "Please enter your age; \n";
    cin >> age;

    return age;
}

bool ValidateNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

void PrintResult(int age)
{
    if(ValidateNumberInRange(age, 18, 45))
        cout << age << " is a Valid Age! \n";
    else
        cout << age << " is Invalid Age! \n";
}

int main()
{
    PrintResult(ReadAge());

    return 0;
}