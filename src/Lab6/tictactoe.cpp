#include <iostream>
using namespace std;

int POSITIONS[] = {
    0,1,2,
    3,4,5,
    6,7,8,
    0,3,6,
    1,4,7,
    2,5,8,
    0,4,8,
    2,4,6,
};

char symbols[] = {' ','X','O'};

int board[9] = {0,0,0,0,0,0,0,0,0};

int checkWinner(){
    for(int i = 0; i < 8; i++){
        if(board[POSITIONS[3*i+0]]*board[POSITIONS[3*i+1]]*board[POSITIONS[3*i+2]] == 1) return 1;
        if(board[POSITIONS[3*i+0]]*board[POSITIONS[3*i+1]]*board[POSITIONS[3*i+2]] == 8) return 2;
    }
    return 0;
}

void display(){
    for(int i = 0; i < 9; i++){
        if(i%3==0) cout << '\n';
        cout << '[' << symbols[board[i]] << ']';
    }
    cout << '\n';
}

int main(){
    int turn  = 1;
    for(int i = 0; i < 9; i++){
        display();
        int cell = -1;
        while(cell == -1 || board[cell]){
            cout << symbols[turn] << "'s turn, enter the number of the cell\n";
            cin >> cell;
            cell--;
        }
        board[cell] = turn;
        int win = checkWinner();
        if(win){
            display();
            cout << symbols[win] << " wins !\n";
            return 0;
        }
        turn = 3 - turn;
    }
    display();
    cout << "Tie.\n";
} 