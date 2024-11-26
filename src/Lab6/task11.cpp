#include <iostream>
using namespace std;

void printArrayIn2D(char A[], int n, int rows, int columns){
    for(int i = 0; i < n; i++){
        cout << A[i] << ' ';
        if((i+1)%columns == 0) cout << '\n';
    }
}

int main(){
    printArrayIn2D(("abcdefghi"),9,3,3);
    cout << "----------------\n";
    printArrayIn2D(("qwertyuiopasdfghjkl;zxcvbnm,./"),30,3,10);
} 