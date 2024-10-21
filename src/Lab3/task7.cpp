#include <iostream>
using namespace std;

int main(){
    int n;
    double sum = 0;
    double nb = -1;
    cout << "Type strictly positive integers to compute their mean, and finish with 0.\n";
    do{
        cin >> n;
        if(n < 0){
            cout << "ERROR, retype a positive integer please.\n";
            continue;
        }
        nb += 1;
        sum += n;
    }while(n);
    
    if(nb == 0){
        cout << "No positive integer has been entered :/\n";
    }else {
        cout << "The mean is equal to " << sum/nb << ".\n";
    }
}