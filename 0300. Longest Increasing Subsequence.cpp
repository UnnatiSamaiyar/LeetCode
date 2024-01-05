class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()){
            return 0;
        }
        vector<int>temp(n, 1);
        for(int i=1; i<n; ++i){
            for(int j=0; j<i; ++j){
                if(nums[i]>nums[j]){
                    temp[i] = max(temp[i], temp[j] + 1);
                }
            }
        }
        return *max_element(temp.begin(), temp.end());
    }
};
