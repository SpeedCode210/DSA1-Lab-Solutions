#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

void removeElementArray(int v, int &n, int A[]){
    for(int i = 0; i < n; i++){
        if(A[i] != v) continue;

        for(int j = i; j < n-1; j++){
            A[j] = A[j+1];
        }
        A[n-1] = 0;

        break;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    removeElementArray(4,n,arr);
    assert(arr[0]==1);
    assert(arr[1]==2);
    assert(arr[2]==3);
    assert(arr[3]==5);
    assert(arr[4]==6);
    assert(arr[5]==7);
    assert(arr[6]==0);
    cout << "Test passed\n";
}