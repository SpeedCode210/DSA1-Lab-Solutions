#include <iostream>
using namespace std;

void scanArray(int A[], int n){
    for(int i = 0; i < n; i++)
        cin >> A[i];
}

void printArray(int A[], int n){
    for(int i = 0; i < n; i++)
        cout << A[i] << ' ';
    cout << '\n';
}

int main(){
    cout << "Enter the number of numbers : ";
    int n;
    cin >> n;
    int arr[n];
    scanArray(arr,n);
    printArray(arr,n);
}