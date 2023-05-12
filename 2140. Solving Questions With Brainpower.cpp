class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int size=questions.size();
        vector<long long> dp(200001,0);
        for(int i=0;i<size;i++) {
            if(i!=0) {
                dp[i]=max(dp[i],dp[i-1]);
            }
            dp[questions[i][1]+i+1]=max(dp[questions[i][1]+i+1],dp[i]+questions[i][0]);
        }
        return *max_element(dp.begin(),dp.end());
    }
};
