#include <iostream>
#include <cmath>

using namespace std;

double F(double x, bool &isDefined){
    double sq = (x-1)*(x-2);
    if(sq >=0) isDefined = true;
    else{
        isDefined = false;
        return 0;
    }
    return sqrt(sq);
}


int main(){
    
}