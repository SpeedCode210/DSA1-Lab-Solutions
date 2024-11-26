#include <iostream>
using namespace std;

void initializeSpace(char A[], int n){
    for(int i = 0; i < n; i++) A[i] = ' ';
}

void printArray(char A[], int n){
    for(int i = 0; i < n; i++) cout << A[i];
    cout << '\n';
}

int main(){
    char arr[5];
    initializeSpace(arr, 5);
    arr[0] = 's';
    arr[2] = 's';
    arr[4] = 's';
    printArray(arr,5);
}