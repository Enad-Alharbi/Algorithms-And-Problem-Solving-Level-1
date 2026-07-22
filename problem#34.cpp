#include <iostream>

using namespace std;

// This program will ask the user to enter Total Sales and then calculate and print the total commision.

int ReadTotalSales()
{
    int totalSales;

    cout << "Please enter your total sales: \n";
    cin >> totalSales;

    return totalSales;
}


int CalculateCommissions(int totalSales)
{
    int totalCommission = 0;

    if(totalSales >= 1000000)
    {
        totalCommission = 0.01 * totalSales;
        return totalCommission;
    }
    else if(totalSales >= 500000)
    {
        totalCommission = 0.02 * totalSales;
        return totalCommission;
    }
    else if(totalSales >= 100000)
    {
        totalCommission = 0.03 * totalSales;
        return totalCommission;
    }
    else if(totalSales >= 50000)
    {
        totalCommission = 0.05 * totalSales;
        return totalCommission;
    }
    else
    {
        return totalCommission;
    }
}

void PrintTotalCommission(int totalSales)
{
    cout << "Total Commission = " << CalculateCommissions(totalSales);
}

int main()
{
    PrintTotalCommission(ReadTotalSales());

    return 0;
}