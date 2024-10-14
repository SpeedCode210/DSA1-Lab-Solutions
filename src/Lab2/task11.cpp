#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a;
    cout << "Enter your number : ";
    cin >> a;
    cout << "The absolute value of " << a << " is equal to " << abs(a) << '\n';

    auto expo = exp(a);
    if (isinf(expo))
        cout << "The exponential of " << a << " is too large for your poor computer :/\n";
    else
        cout << "The exponential of " << a << " is equal to " << exp(a) << '\n';

    if (a < 0)
    {
        cout << "I cannot compute the square root and the natural logarithm of a negative number :/\n";
        return 0;
    }

    cout << "The square root of " << a << " is equal to " << sqrt(a) << '\n';

    if (a == 0)
    {
        cout << "I cannot compute the natural logarithm of 0 :/\n";
        return 0;
    }

    auto ln = log(a);
    if (isinf(ln))
        cout << "The natural logarithm of " << a << " is too large for your poor computer :/\n";
    else
        cout << "The natural logarithm of " << a << " is equal to " << ln << '\n';

    return 0;
}