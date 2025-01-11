#include <iostream>
using namespace std;
typedef long long ll;

ll power(ll A, ll B)
{
    if (B == 0)
        return 1;
    return A*power(A, B-1); 
}

int main()
{
    cout << power(2, 5) << '\n';
    return 0;
}