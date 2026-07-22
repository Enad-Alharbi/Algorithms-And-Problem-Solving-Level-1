#include <iostream>

using namespace std;

// This program will ask the user to enter Total Sales and then calculate and print the total commision.

float ReadTotalSales()
{
    int totalSales;

    cout << "Please enter your total sales: \n";
    cin >> totalSales;

    return totalSales;
}

float GetCommissionPercentage(float totalSales)
{
    if (totalSales >= 1000000)
        return 0.01;
    else if (totalSales >= 500000)
        return 0.02;
    else if (totalSales >= 100000)
        return 0.03;
    else if (totalSales >= 50000)
        return 0.05;
    else
        return 0.00;
}

float CalculateTotalCommission(float totalSales)
{
    return totalSales * GetCommissionPercentage(totalSales);
}

int main()
{
    float totalSales = ReadTotalSales();

    cout << "\nCommission Percentage = " << GetCommissionPercentage(totalSales) << endl;
    cout << "\nTotal Commission = " << CalculateTotalCommission(totalSales) << endl;

    return 0;
}