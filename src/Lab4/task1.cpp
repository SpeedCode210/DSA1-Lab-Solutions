#include <iostream>
#include <cmath>

using namespace std;

void displayCircleInfo(double radius){
    cout << "The diameter is equal to " << 2*radius << '\n';
    cout << "The circumference is equal to " << 2*M_PI*radius << '\n';
    cout << "The area is equal to " << M_PI*radius*radius << '\n';
}

int main(){
    cout << "Enter the radius of the circle please : ";
    double r;
    cin >> r;
    displayCircleInfo(r);
}