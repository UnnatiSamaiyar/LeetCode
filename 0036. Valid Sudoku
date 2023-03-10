class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        int blocks[3][3][9] = {0};
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){
                    int num = board[i][j] - '1';
                    if(rows[i][num]++) return 0;
                    if(cols[j][num]++) return 0;
                    if(blocks[i/3][j/3][num]++) return 0;
                }
            }
        }
        return 1;
    }
};
