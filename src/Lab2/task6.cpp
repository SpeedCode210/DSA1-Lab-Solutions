#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter your number : ";
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        cout << "0" << i << " x " << n << " = " << n * i << '\n';
    }
    cout << "10 x " << n << " = " << n * 10 << '\n';
}