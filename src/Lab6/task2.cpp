#include <iostream>
#include <cassert>
using namespace std;

int minArray(int* A, int n){
    int mini = A[0];
    int miniIndex = 0;
    for(int i = 1; i < n; i++)
        if(mini > A[i])
        {
            mini = A[i];
            miniIndex = i;
        }

    return miniIndex;
}


int main(){
    int arr1[] = {5,3,7,4,4,6,3,1,6,4};
    assert(arr1[minArray(arr1, 10)] == 1);
    cout << "Test 1 passed\n";
    int arr2[] = {3,6,8,4,2,4,7,7,5,3,4,5,6,6,4,3};
    assert(arr2[minArray(arr2, 16)] == 2);
    cout << "Test 2 passed\n";
    int arr3[] = {8,7,5,4,7,9,8,7,6,4,7,8};
    assert(arr3[minArray(arr3, 12)] == 4);
    cout << "Test 3 passed\n";
}