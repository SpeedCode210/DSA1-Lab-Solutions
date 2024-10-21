#include <iostream>
using namespace std;

int main(){
    cout << "Enter the value of N : ";
    int N;
    cin >> N;
    ios::sync_with_stdio(false);
    cout << "The sum of the "<<N<<" first odd numbers is equal to ";
    N = N*2-1;
    long long sum  = 0;
    while(N > -1){
        sum += N;
        N -= 2;
    }

    cout << sum << '\n';
}