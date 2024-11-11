#include <iostream>

using namespace std;

bool Prime(int n){

    if(n < 2) return false;

    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }

    return true;
}

int main(){
    int a,b;
    cout << "Enter the minimum : ";
    cin >> a;
    cout << "Enter the maximum : ";
    cin >> b;
    cout << "Here are the prime numbers of the interval [" << a << ',' << b << "] :\n";
    for(int i = a; i <= b; i++){
        if(Prime(i)) cout << i << ' ';
    }
    cout << '\n';
}