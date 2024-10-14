#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter your number : ";
    cin >> a;
    if (a % 2)
        cout << "The number is odd\n";
    else
        cout << "The number is even\n";
}