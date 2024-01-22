class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(2);
        int expectedSum = n*(n+1)/2;
        int sum = 0;
        int duplicateNum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            if(i>0 && nums[i]==nums[i-1]){
                ans[0] = nums[i];
            }
        }
        int missingNum = expectedSum - (sum - ans[0]);
        ans[1] = missingNum;;
        return ans;
    }
};
