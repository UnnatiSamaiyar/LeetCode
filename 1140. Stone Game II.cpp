class Solution {
public:
    // dp[i][j] = max stones you can get from piles[i:] with M = j
    int dp[101][200], n;
    int dfs(vector<int>& piles, int i, int m, int total) {
        // if we calculated the result before, use it directly
        if (dp[i][m] != -1) return dp[i][m];
        // res: used to compare the max number of stones
        // taken: used to record how many stones we've taken
        int res = 0, taken = 0;
        // i is the starting position
        // we can take at most i + 2 * m piles
        // however, it may exceed the size of piles 
        // hence use min to get the max limit
        for (int j = i; j < min(i + 2 * m, n); j++) {
            // take this pile of stones
            taken += piles[j];
            // move to the next position
            // with the new M = max(M, X)
            // where X is how many piles we've taken so far which is j - i + 1
            res = max(res, total - dfs(piles, j + 1, max(m, j - i + 1), total - taken));
        }
        // memoize the result
        return dp[i][m] = res;
    }
    
    int stoneGameII(vector<int>& piles) {
        // init dp with value -1
        memset(dp, -1, sizeof(dp));
        n = piles.size();
        return dfs(piles, 0, 1, accumulate(piles.begin(), piles.end(), 0));
    }
};
