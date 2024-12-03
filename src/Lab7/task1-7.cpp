#include <iostream>
#include <vector>
#include <set>
#include "task1-7.hpp"
using namespace std;

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

void separateEvenOdd(int M[][COL], int n, int m,int A1[],int A2[], int &size1, int
&size2){
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            (M[i][j]%2 ? A1 : A2)[(M[i][j]%2 ? p1 : p2)++] = M[i][j];
        }
    }
    cout << "The odd elements are : ";
    for(int i = 0; i < p1; i++){
        cout << A1[i] << ' ';
    }
    cout << endl;
    cout << "The even elements are : ";
    for(int i = 0; i < p2; i++){
        cout << A2[i] << ' ';
    }
    cout << endl;
    size1 = p1;
    size2 = p2;
}

int sumMatrix(int M[][COL], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            sum += M[i][j];
    }
    return sum;
}
int sumDiagonal(int M[][COL], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += M[i][i];
    }
    return sum;
}

bool CheckSum(int M[][COL], int n, int m){
    int results[n+m];
    fill(results, results+n+m,0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            results[i] += M[i][j];
            results[n+j] += M[i][j];
        }
    }
    for(int i = 0; i < n+m-1; i++)
        if(results[i] != results[i+1]) 
            return false;
    return true;
}

bool CheckElementsInRow(int M[][COL], int n, int m, int row){
    for(int i = 0; i < m; i++){
        if(M[row][i] == 0) continue;
        for(int j = 0; j < i; j++)
            if(M[row][j] == M[row][i])
                return false;
    }
    return true;
}

bool CheckElementsInColumn(int M[][COL], int n, int m, int col){
    for(int i = 0; i < n; i++){
        if(M[i][col] == 0) continue;
        for(int j = 0; j < i; j++)
            if(M[j][col] == M[i][col])
                return false;
    }
    return true;
}
// (r0,c0) are the coordinates of the upper leftmost element of the submatrix
bool CheckElementsInSubMatrix(int M[][COL], int n, int m, int r0, int c0,int subN, int subM){
    for(int i = 0; i < subN; i++){
        for(int j = 0; j < subM; j++){
            if(M[r0+i][c0+j] == 0) continue;
            for(int x = 0; x <= i; x++)
                for(int y = 0; y < subM  && (x != i || y < j); y++)
                    if(M[r0+i][c0+j] == M[r0+x][c0+y])
                        return false;
        }
    }
    return true;
}

void initSpace(int M[][COL], int n, int m, int nbPerRow){
    //fill arrayWithZeroes
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            M[i][j] = 0;
    //initialize sets to avoid repetition
    set<int> columns[9];
    set<int> blocks[9];
    set<int> rows[9];
    for(int i = 0; i < 9; i++)
        for(int j = 1; j <= 9; j++){
            columns[i].insert(j);
            blocks[i].insert(j);
            rows[i].insert(j);
        }
    // generate the numbers
    for(int row = 0; row < 9; row++){
        for(int i = 0; i < nbPerRow; i++){
            int index = rand()%m;
            vector<int> possibilities;
            while(M[row][index]) index = (index+1)%m;
            for(auto k : blocks[3*(row/3)+index/3]){
                if(columns[index].count(k) && rows[row].count(k)) possibilities.push_back(k);
            }
            // If no possibilities, try another config
            if(!possibilities.size()){
                initSpace(M, n, m, nbPerRow);
                return;
            }
            int nb =  possibilities[rand()%possibilities.size()];
            columns[index].erase(nb);
            rows[row].erase(nb);
            blocks[3*(row/3)+index/3].erase(nb);
            M[row][index] = nb;
        }
    }
}

void exo3(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int mat[n][COL];
    scanMatrix(mat,n,n);
    int S1 = sumMatrix(mat,n,n);
    int S2 = sumDiagonal(mat,n,n);
    cout << "(1) The sum of elements above and below the main diagonal is : " << S1 - S2 << endl;;
    cout << "(2) The sum of elements on the main diagonal is : " << S2 << endl;
}
