#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cout << "Enter the 3 angles : ";
    for(int i = 0; i < 3; i++){
        cin >> a;
        b += a;
    }

    if(b==180) cout << "The triangle is valid\n";
    else  cout << "The triangle is NOT valid\n";
}