#include <iostream>
#include <cassert>
using namespace std;

bool fullArray(char A[], int n){
    for(int i = 0; i < n; i++)
        if(A[i] == ' ') return false;

    return true;
}

int main(){
    char arr1[] = {'0','#','k'};
    char arr2[] = {' ','t','e'};
    char arr3[] = {'.','k',' ','i'};
    char arr4[] = {'d','s','a', '1'};
    assert(fullArray(arr1,3));
    assert(!fullArray(arr2,3));
    assert(!fullArray(arr3,4));
    assert(fullArray(arr4,4));
    cout << "Tests passed\n";
} 