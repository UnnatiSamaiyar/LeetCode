class Solution {
public:
    const int MOD = 1e9 + 7;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(maxMove + 1, vector<vector<int>>(m, vector<int>(n, 0)));

    dp[0][startRow][startColumn] = 1;

    int result = 0;
    for (int move = 1; move <= maxMove; ++move) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
                for (const auto& dir : directions) {
                    int ni = i + dir[0];
                    int nj = j + dir[1];

                    if (ni >= 0 && ni < m && nj >= 0 && nj < n) {
                        dp[move][i][j] = (dp[move][i][j] + dp[move - 1][ni][nj]) % MOD;
                    } else {
                        result = (result + dp[move - 1][i][j]) % MOD;
                    }
                }
            }
        }
    }

    return result;
    }
};
