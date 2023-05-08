class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int count = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            count = 0;
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
