#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter your first number : ";
    cin >> a;
    cout << "Enter your second number : ";
    cin >> b;
    cout << a << " to the power of " << b << " is equal to " << pow(a, b) << '\n';
}