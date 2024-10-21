#include <iostream>
using namespace std;

int main(){
    cout << "Enter 10 integers\n";
    int maxi = -__INT_MAX__;
    int occurences = 0;
    int t = 10;
    while(t--){
        int k;
        cin >> k;
        if(k < maxi) continue;
        if(k==maxi){
            occurences++;
            continue;
        }
        maxi = k;
        occurences = 1;
    }
    cout << "The greatest number (" << maxi << ") has been repeated " << occurences << " time" << (occurences==1 ? "" : "s") << ".\n";
}