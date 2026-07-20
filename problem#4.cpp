#include <iostream>

using namespace std;

// This program will ask the user to enter his/her Age and Driver License and then print Hired if age greater than 21 and has driver license, or Rejcted.


struct stInfo{
    short age;
    bool hasDriverLicense;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Enter your age: \n";
    cin >> info.age;

    cout << "Do you have a Driver License? (Enter 1 for Yes and 0 for No): \n";
    cin >> info.hasDriverLicense;

    return info;
}

bool IsAccepted(stInfo info)
{
    return (info.age > 21 && info.hasDriverLicense);
}

void PrintResult(stInfo info)
{
    if(IsAccepted(info))
        cout << "Hired!\n";
    else
        cout << "Rejected!\n";
}

int main()
{
    PrintResult(ReadInfo());
    
    return 0;
}