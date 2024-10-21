#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a positive integer : ";
    int n;
    cin >> n;
    int m = 0;
    int v10 = 0;
    while (!(n % 10))
    {
        v10++;
        n /= 10;
    }
    while (n)
    {
        m = m * 10 + (n % 10);
        n /= 10;
    }
    cout << "The reversed number is ";
    while (v10)
    {
        cout << '0';
        v10--;
    }
    cout << m << '\n';
}