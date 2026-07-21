#include <iostream>

using namespace std;

// This program will ask the user to enter his first name and last name and then print them on the screen.

struct stInfo{
    string firstName;
    string lastName;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Enter your First Name please: \n";
    cin >> info.firstName;

    cout << "Enter you Last Name please: \n";
    cin >> info.lastName;

    return info;
}

string GetFullName(stInfo info, bool reversed)
{
    string fullName;
    if(reversed)
        fullName = info.lastName + " " + info.firstName;
    else
        fullName = info.firstName + " " + info.lastName;

    return fullName;
}

void PrintFullName(string fullName)
{
    cout << "Your Full Name is: " << fullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(), 0));

    return 0;
}