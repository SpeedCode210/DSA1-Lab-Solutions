#include <iostream>
#include <cassert>
using namespace std;

bool F(int A[], int n){
    for(int i = 0; i < n; i++){
        if(A[i] >= 0 && A[i] <= 10) return true;
    }
    return false;
}


int main(){
    int arr1[] = {9450,23232,3423,53346,63453,2,64,4,454,223};
    assert(F(arr1,10) == true);
    cout << "Test 1 passed\n";
    int arr2[] = {454,343434,4565,43244,54543,23434,64532,78786,12123,45552,24334};
    assert(F(arr2,11) == false);
    cout << "Test 2 passed\n";
}