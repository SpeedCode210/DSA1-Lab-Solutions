#include <iostream>
using namespace std;

int main()
{
    int days;
    cout << "Enter the number of days : ";
    cin >> days;

    cout << "The result is " << days / 365 << " years, ";
    days %= 365;
    cout << days / 7 << " weeks, ";
    days %= 7;
    cout << "and " << days << " days.\n";
}