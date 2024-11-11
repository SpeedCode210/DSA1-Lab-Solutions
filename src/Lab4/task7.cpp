#include <iostream>

using namespace std;

string decimalToBinary(int n){
    string res = "";
    while(n){
        res = (char)('0' + n%2) + res;
        n >>= 1;
    }
    return res;
}

int main(){
    cout << "Enter your decimal number : ";
    int n;
    cin >> n;
    cout << "Here's the binary representation of the number : " << decimalToBinary(n) <<'\n';
}