#include <iostream>
using namespace std;
#define COL 40000

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

void T(int input[][COL], int output [][COL], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            output[j][i] = input[i][j];
        }
    }
}

int main(){
    int n,m;
    cout << "Enter n and m such that the matrix size is nxm :\n";
    cin >> n >> m;
    int mat1[n][COL];
    int mat1T[m][COL];
    scanMatrix(mat1,n,m);
    T(mat1, mat1T, n, m);
    cout << "The transposed matrix is :\n";
    printMatrix(mat1T, m,n);
}