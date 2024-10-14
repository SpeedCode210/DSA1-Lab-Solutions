#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salary, increase;
    cout << "Enter your current salary : ";
    cin >> salary;
    cout << "Enter your estimated increase rate (as a percentage) : ";
    cin >> increase;
    double raise = salary * increase / 100.0;
    cout << "Your raise is equal to " << setprecision(2) << fixed << raise << " DA\n";
    cout << "Your new salary is equal to " << setprecision(2) << fixed << salary + raise << " DA\n";
}