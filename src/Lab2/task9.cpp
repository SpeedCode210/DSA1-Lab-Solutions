#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter your first number  : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << "Enter your third number  : ";
    cin >> c;
    if (a < b)
        a = b;
    if (a < c)
        a = c;
    cout << "The greatest number is " << a << '\n';
}