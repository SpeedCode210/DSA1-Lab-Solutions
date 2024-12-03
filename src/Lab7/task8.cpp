#include <iostream>
using namespace std;
#define COL 4000

void scanMatrix(int M[][COL], int n, int m)
{
    cout << "Input your " << n << "x" << m << " matrix please :\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> M[i][j];
}

void printMatrix(int M[][COL], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << M[i][j] << ' ';
        cout << endl;
    }
}

void multiplyMatrices(int A[][COL], int B[][COL], int output [][COL], int n,int k, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            output[i][j] = 0;
            for(int u = 0; u < k; u++){
                output[i][j] += A[i][u]*B[u][j];
            }
        }
    }
}

int main(){
    int mat1[][COL] = {
        {2,3},
        {2,6},
    };
    int mat2[][COL] = {
        {6,2},
        {5,3},
    };
    int mult[2][COL];
    multiplyMatrices(mat1,mat2,mult,2,2,2);
    printMatrix(mult,2,2);
}