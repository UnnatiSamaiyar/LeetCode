class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
       int n = matrix.size();

        std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
        for(int i=0; i<n; ++i){
            dp[0][i] = matrix[0][i];
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                dp[i][j] = matrix[i][j] + std::min(dp[i - 1][j],
                    std::min((j > 0) ? dp[i - 1][j - 1] : INT_MAX,
                        (j < n - 1) ? dp[i - 1][j + 1] : INT_MAX));
            }
        }
        int ans = INT_MAX;
        for(int i=0; i<n; ++i){
            ans = std::min(ans, dp[n - 1][i]);
        }
        return ans;
    }
};
