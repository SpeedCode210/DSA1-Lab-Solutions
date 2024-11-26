#include <iostream>
#include <cassert>
using namespace std;

void initializeSpace(char A[], int n){
    for(int i = 0; i < n; i++) A[i] = ' ';
}

bool placeMark(char A[], int n, char Mark, int position){
    if(A[position] != ' ') return false;
    A[position] = Mark;
    return true;
}

int main(){
    char arr[10];
    initializeSpace(arr, 10);
    assert(placeMark(arr,10,'*',3));
    assert(!placeMark(arr,10,'*',3));
    assert(placeMark(arr,10,'x',1));
    assert(!placeMark(arr,10,'b',1));
    cout << "Test passed\n";
}