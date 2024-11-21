#include <iostream>
#include <cmath>

using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}  

int main(){
    int a = 3, b = 5;
    swap(a,b);
    cout << a << ' ' << b << '\n';
}