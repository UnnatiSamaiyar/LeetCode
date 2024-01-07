class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        vector<unordered_map<long long,int>>dp(n);
        for(int i=0; i<n; ++i){
            for(int j=0; j<i; ++j){
                long long diff = (long long)nums[i]-nums[j];
                int count_i = dp[i][diff];
                int count_j = dp[j][diff];
                dp[i][diff] += count_j + 1;
                count += count_j;
            }
        }
        return count;
    }
};
