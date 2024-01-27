class Solution {
public:
    int mod = 1000000007;
    int kInversePairs(int n, int k) {
        vector<vector<int>>dp(n+1, vector<int>(k+1, 0));
        dp[0][0] = 1;
        for(int i=1; i<=n; ++i){
            for(int j=0; j<=k; ++j){
                for(int p=0; p<=min(j, i-1); ++p){
                    dp[i][j] = (dp[i][j]+dp[i-1][j-p]) % mod;
                }
            }
        }
        return dp[n][k];
    }
};
