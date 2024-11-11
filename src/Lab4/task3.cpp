#include <iostream>
#include <cmath>

using namespace std;

double distance(double x_a, double y_a, double x_b, double y_b){
    return pow(x_a-x_b, 2)+pow(y_a-y_b, 2);
}

int main(){
    cout << "Enter the coordinates of the first point :\n";
    double a,b;
    cin >> a >> b;
    cout << "Enter the coordinates of the second point :\n";
    double x,y;
    cin >> x >> y;
    cout << "The distance between the 2 points is equal to " << distance(a,b,x,y) << '\n';
}