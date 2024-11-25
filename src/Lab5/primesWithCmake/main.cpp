#include "prime.h"
#include <iostream>
#include <cassert>

using namespace std;

int main(){
    assert(isPrime(45) == false);
    cout << "Passed Test 1\n";
    assert(isPrime(5) == true);
    cout << "Passed Test 2\n";
    assert(nthPrime(1) == 2);
    cout << "Passed Test 3\n";
    assert(nthPrime(5) == 11);
    cout << "Passed Test 4\n";
    displayPrime(45);
    displayPrime(5);

}