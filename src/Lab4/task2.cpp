#include <iostream>

using namespace std;

void swapAndShow(int &a, int &b){
    int x;
    x = a;
    a = b;
    b = x;

    cout << a << ' ' << b << '\n';
}

int main(){
    cout << "Enter the 2 integers :\n";
    int a,b;
    cin >> a >> b;
    swapAndShow(a,b);
}