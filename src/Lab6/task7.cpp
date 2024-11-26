#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

void SwapArray(int &n, int A[]){
    for(int i = 0;i < n/2; i++){
        swap(A[i],A[n-i-1]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    SwapArray(n,arr);
    // Array should be equal to {7,6,5,4,3,2,1}
    assert(arr[0]==7);
    assert(arr[1]==6);
    assert(arr[2]==5);
    assert(arr[3]==4);
    assert(arr[4]==3);
    assert(arr[5]==2);
    assert(arr[6]==1);
    cout << "Test 1 passed\n";

    int arr2[] = {1,2,3,4,5,6};
    n = 6;
    SwapArray(n,arr2);
    // Array should be equal to {6,5,4,3,2,1}
    assert(arr2[0]==6);
    assert(arr2[1]==5);
    assert(arr2[2]==4);
    assert(arr2[3]==3);
    assert(arr2[4]==2);
    assert(arr2[5]==1);
    cout << "Test 2 passed\n";
}

