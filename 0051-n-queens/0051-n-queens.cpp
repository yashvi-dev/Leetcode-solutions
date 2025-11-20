#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isSafe(const vector<string> &board, int row, int col) {
        int n = board.size();
        // check same column upwards
        for (int i = 0; i < row; ++i)
            if (board[i][col] == 'Q') return false;

        // check upper-left diagonal
        for (int i = row-1, j = col-1; i >= 0 && j >= 0; --i, --j)
            if (board[i][j] == 'Q') return false;

        // check upper-right diagonal
        for (int i = row-1, j = col+1; i >= 0 && j < n; --i, ++j)
            if (board[i][j] == 'Q') return false;

        return true;
    }

    void nqueen(vector<string> &board, int row, int n, vector<vector<string>> &ans) {
        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int j = 0; j < n; ++j) {
            if (isSafe(board, row, j)) {
                board[row][j] = 'Q';         // place queen
                nqueen(board, row + 1, n, ans);
                board[row][j] = '.';         // backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.')); // initialize n x n board with '.'
        nqueen(board, 0, n, ans);
        return ans;
    }
};
