#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r;
    cout << "Please enter the radius of the circle : ";
    cin >> r;
    cout << "Your circle has area " << r * r * M_PI << " and circumference " << 2 * M_PI * r << '\n';
}