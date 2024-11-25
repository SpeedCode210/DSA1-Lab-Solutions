#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

void scanArray(int A[], int n){
    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        if(A[i] < 0 || A[i] > 20){
            cout << "Error, the input is out of the range [0,20]\n";
            exit(-1);
        }
    }
}

void printArray(int A[], int n){
    int freq[21];
    fill(freq, freq+21, 0);
    for(int i = 0; i < n; i++) freq[A[i]]++;
    for(int i = 0; i < 21; i++){
        cout << "The number " << i << (freq[i] > 0 ? "" : " never") << " appears";
        if(freq[i]) cout << " " << freq[i] << " time" << (freq[i]==1 ? "" : "s");
        cout << ".\n";
    }
}

int main(){
    cout << "Enter the number of numbers : ";
    int n;
    cin >> n;
    cout << "Enter the array elements" << '\n';
    int arr[n];
    scanArray(arr,n);
    printArray(arr,n);
}