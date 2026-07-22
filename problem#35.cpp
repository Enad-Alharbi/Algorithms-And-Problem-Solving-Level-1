#include <iostream>

using namespace std;

// This program will ask the user to enter Pennies, Nickels, Dimes, Quarters, and Dollars. and then calculate the total pennies, total dollars, and print them on the scren.

struct stPiggyBank
{
    int penny, nickel, dime, quarter, dollar;
};

void ReadValues(stPiggyBank &piggyBank)
{
    cout << "Please enter Pennies: \n";
    cin >> piggyBank.penny;

    cout << "Please enter Nickels: \n";
    cin >> piggyBank.nickel;

    cout << "Please enter Dimes: \n";
    cin >> piggyBank.dime;

    cout << "Please enter Quarters: \n";
    cin >> piggyBank.quarter;

    cout << "Please enter Dollars: \n";
    cin >> piggyBank.dollar;
}

int CalculateTotalPennies(stPiggyBank piggyBank)
{
    int totalPennies = (piggyBank.penny) + (piggyBank.nickel * 5) + (piggyBank.dime * 10) + (piggyBank.quarter * 25) + (piggyBank.dollar * 100);

    return totalPennies;
}


float GetTotalDollars(stPiggyBank piggyBank)
{
    return (float)CalculateTotalPennies(piggyBank)/100;
}

int main()
{
    stPiggyBank piggyBank;

    ReadValues(piggyBank);

    cout << "\nTotal Pennies = " << CalculateTotalPennies(piggyBank) << " Pennies\n";
    cout << "Total Dollars = " << GetTotalDollars(piggyBank) << " Dollars\n";

    return 0;
}