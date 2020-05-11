
#include <cstdlib> // system definitions
#include <iostream> // I/O definitions
using namespace std; // make std:: accessible
const int x = 1;
 const int o = -1;
const int empty = 0; // possible marks
int board[3][3]; // playing board
int currentPlayer; // current player (X or O)
void clearBoard() { // clear the board
for (int i = 0; i < 3; i++)
for (int j = 0; j < 3; j++)
board[i][j] = empty; // every cell is empty
currentPlayer=x; // player X starts
}
void putMark(int i, int j) { // mark row i column j
board[i][j]=currentPlayer; // mark with current player
currentPlayer = -currentPlayer; // switch players
}
bool isWin(int mark) { // is mark the winner?
int win = 3*mark; // +3 for X and -3 for O
return ((board[0][0] + board[0][1] + board[0][2] == win) // row 0
|| (board[1][0] + board[1][1] + board[1][2] == win) // row 1
|| (board[2][0] + board[2][1] + board[2][2] == win) // row 2
|| (board[0][0] + board[1][0] + board[2][0] == win) // column 0
|| (board[0][1] + board[1][1] + board[2][1] == win) // column 1
|| (board[0][2] + board[1][2] + board[2][2] == win) // column 2
|| (board[0][0] + board[1][1] + board[2][2] == win) // diagonal
|| (board[2][0] + board[1][1] + board[0][2] == win)); // diagonal
}
int getWinner() { // who wins? (EMPTY means tie)
if (isWin(x)) return x;
else if (isWin(o)) return o;
else return empty;
}
void printBoard() { // print the board
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
    switch (board[i][j]) {
        case x: cout << "X"; break;
        case o: cout << "O"; break;
        case empty: cout << " "; break;
} if (
j
<
2) cout << "|"; // column boundary
} if (
i
<
2) cout << "\n-+-+-\n"; // row boundary
}
}
int main() { // main program
clearBoard(); // clear the board
putMark(0,0); putMark(1,1); // add the marks
putMark(0,1); putMark(0,2);
putMark(2,0); putMark(1,2);
putMark(2,2); putMark(2,1);
putMark(1,0);
printBoard(); // print the final board
int winner = getWinner();
if (winner != empty) // print the winner
cout << " " << (winner == x ? 'X' : 'Y') << " wins" << endl;
else
cout << " Tie" << endl;
return 0;
}

