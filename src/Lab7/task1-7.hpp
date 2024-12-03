#define COL 1000

#ifndef SUDOKU_FUNCTIONS
#define SUDOKU FINCTIONS
void scanMatrix(int M[][COL], int n, int m);
void printMatrix(int M[][COL], int n, int m);
void separateEvenOdd(int M[][COL], int n, int m,int A1[],int A2[], int &size1, int
&size2);
int sumMatrix(int M[][COL], int n, int m);
int sumDiagonal(int M[][COL], int n, int m);
bool CheckSum(int M[][COL], int n, int m);
bool CheckElementsInRow(int M[][COL], int n, int m, int row);
bool CheckElementsInColumn(int M[][COL], int n, int m, int col);
bool CheckElementsInSubMatrix(int M[][COL], int n, int m, int r0, int c0,int subN, int subM);
void initSpace(int M[][COL], int n=9, int m=9, int nbPerRow = 3);

#endif