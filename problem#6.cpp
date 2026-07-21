#include <iostream>

using namespace std;

// This program will ask the user to enter his first name and last name and then print them on the screen.

struct stPerson{
    string firstName;
    string lastName;
};

stPerson ReadPerson()
{
    stPerson person;

    cout << "Enter your First Name please: \n";
    cin >> person.firstName;

    cout << "Enter you Last Name please: \n";
    cin >> person.lastName;

    return person;
}

void PrintFullName(stPerson person)
{
    cout << "Your Full Name is: " << person.firstName << " " << person.lastName << endl;
}

int main()
{
    PrintFullName(ReadPerson());

    return 0;
}