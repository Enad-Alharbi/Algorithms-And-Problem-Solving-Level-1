#include <iostream>

using namespace std;

// This program will ask the user to enter his/her Age and Driver License and then print Hired if age greater than 21 and has driver license, or Rejcted.
// and if the user has Recommendation he/she will be Hired.

struct stInfo{
    short age;
    bool hasDriverLicense;
    bool hasReccomendation;
};

stInfo ReadInfo()
{
    stInfo info;

    cout << "Enter your age please: \n";
    cin >> info.age;

    cout << "Do you have a Driver License? (Enter 1 for Yes and 0 for No): \n";
    cin >> info.hasDriverLicense;

    cout << "Do you have a Reccomendation? (Enter 1 for Yes and 0 for No): \n";
    cin >> info.hasReccomendation;

    return info;
}

bool IsAccepted(stInfo info)
{
    return ((info.age > 21 && info.hasDriverLicense) || (info.hasReccomendation));
}

void printResult(stInfo info)
{
    if(IsAccepted(info))
        cout << "Hired! \n";
    else
        cout << "Rejected! \n";
}

int main()
{
    printResult(ReadInfo());

    return 0;
}