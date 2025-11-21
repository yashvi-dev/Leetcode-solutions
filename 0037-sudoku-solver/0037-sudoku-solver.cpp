#include <vector>
using namespace std;

class Solution {
public:
    bool isSafe(const vector<vector<char>>& board, int row, int col, char digi) {
        // horizontal
        for (int j = 0; j < 9; ++j) {
            if (board[row][j] == digi) return false;
        }
        // vertical
        for (int i = 0; i < 9; ++i) {
            if (board[i][col] == digi) return false;
        }
        // 3x3 subgrid
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;
        
        for (int i = srow; i < srow + 3; ++i) {
            for (int j = scol; j < scol + 3; ++j) {
                if (board[i][j] == digi) return false;
            }
        }
        return true;
    }

    bool helper(vector<vector<char>>& board, int row, int col) {
        // base case: finished all rows
        if (row == 9) return true;

        // compute next cell
        int nextRow = row;
        int nextCol = col + 1;
        if (nextCol == 9) {
            nextRow = row + 1;
            nextCol = 0;
        }

        // if current cell is already filled, just move to next (and return result)
        if (board[row][col] != '.') {
            return helper(board, nextRow, nextCol);
        }

        // try digits 1..9
        for (char digi = '1'; digi <= '9'; ++digi) {
            if (isSafe(board, row, col, digi)) {
                board[row][col] = digi;
                if (helper(board, nextRow, nextCol)) return true;
                // backtrack
                board[row][col] = '.';
            }
        }

        // no valid digit found
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }
};
