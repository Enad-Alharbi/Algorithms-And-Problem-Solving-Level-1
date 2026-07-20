#include <iostream>

using namespace std;

string ReadName()
{
    string name;

    cout << "Enter your name please: " << endl;
    getline(cin, name);

    return name;
}

void PrintName(string name)
{
    cout << "Your name is " << name << "\n";
}

int main()
{
    PrintName(ReadName());

    return 0;
}