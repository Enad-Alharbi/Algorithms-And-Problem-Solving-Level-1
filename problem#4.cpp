#include <iostream>

using namespace std;

// This program will ask the user to enter his/her Age and Driver License and then print Hired if age greater than 21 and has driver license, or Rejcted.


int ReadAge()
{
    short age;

    cout << "Enter your age please: \n";
    cin >> age;

    return age;
}

bool ReadDriverLicense()
{
    bool hasDriverLicense;

    cout << "Do you have driver license? (Enter 0 for No, 1 for Yes): \n";
    cin >> hasDriverLicense;

    return hasDriverLicense;
}

string CheckHiringValidity(bool hasDriverLicense, int age)
{
    if(age > 21 && hasDriverLicense)
        return "Hired";
    else
        return "Rejected";
}

void PrintHiringValidity(string result)
{
    cout << "You are " << result << "!\n";
}

int main()
{
    PrintHiringValidity(CheckHiringValidity(ReadDriverLicense(), ReadAge()));

    return 0;
}