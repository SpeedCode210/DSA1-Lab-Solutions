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
    cout << "Enter your number : ";
    int n;
    cin >> n;
    if(Prime(n)){
        cout << n << " is a prime number.\n";
    }else{
        cout << n << " is not a prime number.\n";
    }
}