#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    if (a > b)
        swap(a, b);
    if (a == 0)
        return b;

    return hcf(a, b - a);
}

int better_hcf(int a, int b)
{
    if (a > b)
        swap(a, b);
    if (a == 0)
        return b;

    return better_hcf(a, b % a);
}

int main()
{
    cout << hcf(7, 13) << '\n';         // 1
    cout << hcf(12, 36) << '\n';        // 12
    cout << better_hcf(12, 40) << '\n'; // 4
    return 0;
}