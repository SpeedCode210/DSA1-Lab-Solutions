#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

void InsertElementArray(int e, int p, int &n, int A[]){
    for(int i = n-1; i > p; i--){
        A[i] = A[i-1];
    }
    A[p] = e;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    InsertElementArray(9,3,n,arr);
    // Array should be equal to {1,2,3,9,4,5,6}
    assert(arr[0]==1);
    assert(arr[1]==2);
    assert(arr[2]==3);
    assert(arr[3]==9);
    assert(arr[4]==4);
    assert(arr[5]==5);
    assert(arr[6]==6);
    cout << "Test passed\n";
}

