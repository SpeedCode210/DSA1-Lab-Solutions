#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cout << "The polynomial is equal to ax^2+bx+c, please enter a then b then c :";
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    cout << "The solutions to the equation " << a << "x^2+" << b << "x+"<<c<<"=0 are :\n";
    if(delta > 0){
        cout << (-b+sqrt(delta))/2.0/a << endl;
        cout << (-b-sqrt(delta))/2.0/a << endl;
    }else if (delta == 0){
        cout << (-b)/2.0/a << endl;
    }else{
        cout << -b/2.0/a << " + " << sqrt(-delta)/2.0/a << "i\n";
        cout << -b/2.0/a << " - " << sqrt(-delta)/2.0/a << "i\n";
    }
}