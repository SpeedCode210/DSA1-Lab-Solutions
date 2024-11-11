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
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int i = 2;
    while(n){
        if(Prime(i)) n--;
        i++;
    }
    cout << "The n-th prime is " << i-1 << '\n';
}