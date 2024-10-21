#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your 10 numbers\n";
    long long sum = 0;
    int a;
    int t = 10;
    while(t--){
        cin >> a;
        sum += a;
    }
    cout << "The sum is equal to " << sum << endl;
}