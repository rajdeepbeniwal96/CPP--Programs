#include <iostream>
using namespace std;

int bishopMoves(int row, int col) {
    const int boardSize = 8;

    int upLeft = min(row - 1, col - 1);
    int upRight = min(row - 1, boardSize - col);
    int downLeft = min(boardSize - row, col - 1);
    int downRight = min(boardSize - row, boardSize - col);

    return upLeft + upRight + downLeft + downRight;
}

int main() {
    int row, col;

    cout << "Enter the row and column of the bishop (1 to 8): ";
    cin >> row >> col;

    if (row < 1 || row > 8 || col < 1 || col > 8) {
        cout << "Invalid position! Please enter values from 1 to 8." << endl;
        return 1;
    }

    int totalMoves = bishopMoves(row, col);
    cout << "Total possible moves of bishop = " << totalMoves << endl;

    return 0;
}
