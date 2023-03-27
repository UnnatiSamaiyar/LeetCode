class Solution {
public:
    int mini(vector<vector<int>>& gr, int i, int j ,vector<vector<int>> &dp ){
        if(i==0 && j==0) return gr[i][j];
        if(i<0 || j<0)  return 1e8;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = gr[i][j] + min(mini(gr,i-1,j,dp),mini(gr,i,j-1,dp));
    }

    int minPathSum(vector<vector<int>>& gr) {
        vector<vector<int>> dp(gr.size(),vector<int>(gr[0].size(),-1));
        return mini(gr,gr.size()-1,gr[0].size()-1,dp);
    }
};
