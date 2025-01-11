#include <iostream>
#include <cassert>
using namespace std;

int sumUntil(int n)
{
    if (n <= 0)
        return 0;
    return n + sumUntil(n - 1);
}

int main()
{
    cout << sumUntil(15) << '\n';
    assert(sumUntil(20) == 210);
    return 0;
}