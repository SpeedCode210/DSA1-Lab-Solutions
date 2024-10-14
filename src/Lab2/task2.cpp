#include <iostream>
using namespace std;

int main()
{
    double l, L;
    cout << "Enter the length of the rectangle : ";
    cin >> l;
    cout << "Enter the width of the rectangle : ";
    cin >> L;
    cout << "The perimeter of the rectangle is equal to " << (L + l) * 2.0 << '\n';
}