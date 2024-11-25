#include "prime.h"
#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void displayPrime(int n)
{
    if(isPrime(n)){
        cout << n << " is a prime number.\n";
    }else{
        cout << n << " is not a prime number.\n";
    }
}

int nthPrime(int n)
{
    int i = 2;
    while(n){
        if(isPrime(i)) n--;
        i++;
    }
    return i-1;
}