#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    if (a < b)
        a = b;
    cout << "The greatest number is " << a << '\n';
}