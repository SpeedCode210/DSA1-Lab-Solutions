#include <iostream>

using namespace std;

string decimalToBinary(int n){
    unsigned int N = n;
    string res = "";
    while(N){
        res = (char)('0' + N%2) + res;
        N >>= 1;
    }
    return res;
}

int main(){
    cout << "Enter your decimal number : ";
    int n;
    cin >> n;
    cout << "Here's the binary representation of the number : " << decimalToBinary(n) <<'\n';
}