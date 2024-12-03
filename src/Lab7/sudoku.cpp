#include <iostream>
#include "task1-7.hpp"
using namespace std;

int main()
{
    srand(time(0));
    int M[9][COL];
    initSpace(M);
    for(int i = 0; i < 81 - 27; i++){
        printMatrix(M,9,9);
        int x,y,nb;
        cout << "Enter the corrdinates x y (for (0,0) <= (x,y) <= (8,8)) and the number N to write : \n";
        cin >> x >> y >> nb;
        if(nb > 9 || nb < 1 || M[x][y]){
            cout << "Invalid input.\n";
            i--;
            continue;
        }
        M[x][y] = nb;
        if(!CheckElementsInRow(M,9,9,x) || !CheckElementsInColumn(M,9,9,y) || !CheckElementsInSubMatrix(M,9,9,(3*(x/3)),(3*(y/3)),3,3)){
            cout << "Invalid cell.\n";
            M[x][y] = 0;
            i--;
            continue;
        }
    }
    cout << "GG !"<< endl;
}