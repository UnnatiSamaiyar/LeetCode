class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == target) flag = true;
            }
        }
        return flag;
    }
};
