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

void printUpperHalfMatrix(int M[][COL], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if(i <= j){
                cout << M[i][j] << ' ';
            }else{
                cout << ' ' << ' ';
            }
        cout << endl;
    }
}

void printLowerHalfMatrix(int M[][COL], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if(i >= j){
                cout << M[i][j] << ' ';
            }else{
                cout << ' ' << ' ';
            }
        cout << endl;
    }
}

int main(){
    int n,m;
    cout << "Enter n and m such that the matrix size is nxm :\n";
    cin >> n >> m;
    int mat1[n][COL];
    scanMatrix(mat1,n,m);
    cout << "Upper half :\n";
    printUpperHalfMatrix(mat1, n,m);
    cout << "\nLower half :\n";
    printLowerHalfMatrix(mat1, n,m);

}