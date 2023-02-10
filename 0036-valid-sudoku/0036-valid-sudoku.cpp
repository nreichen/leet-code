class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // memos for row, col, and square
        int m1[9][9] = {0};
        int m2[9][9] = {0};
        int m3[9][9] = {0};
        
        for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board[0].size(); c++) {
                if (board[r][c] != '.') {
                    //convert char number to int
                    int num = board[r][c] - '0' - 1;
                    int k = (r/3) + (c/3) * 3;
                    if (m1[r][num] || m2[c][num] || m3[k][num]) {
                        return false;
                    }
                    m1[r][num] = 1;
                    m2[c][num] = 1;
                    m3[k][num] = 1;
                }
            }
        }
        return true;
    }
};