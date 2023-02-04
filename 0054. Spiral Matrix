class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int R = matrix.size(), C = matrix[0].size();
        int t = 0, r = C - 1, b = R - 1, l = 0;
        while (t <= b && l <= r) {
            for (int i = l; i <= r; i++) 
                ans.push_back(matrix[t][i]);
            t++;
            for (int j = t; j <= b; j++) 
                ans.push_back(matrix[j][r]);
            r--;
            if (t <= b) {
                for (int m = r; m >= l; m--) 
                ans.push_back(matrix[b][m]);
            b--;
            }
            if (l <= r) {
                for (int n = b; n >= t; n--) 
                ans.push_back(matrix[n][l]);
            l++;
            }
        }
        return ans;
    }
};
