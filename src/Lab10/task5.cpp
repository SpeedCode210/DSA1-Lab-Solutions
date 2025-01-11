#include <iostream>
using namespace std;
typedef long long ll;

bool isPowOf2(ll n)
{
    if (n <= 0)
        return false;
    if (n == 1)
        return true;
    if (n % 2)
        return false;
    return isPowOf2(n / 2);
}

int main()
{
    cout << isPowOf2(32) << '\n';  // 1
    cout << isPowOf2(256) << '\n'; // 1
    cout << isPowOf2(257) << '\n'; // 0
    cout << isPowOf2(12) << '\n';  // 0
    return 0;
}