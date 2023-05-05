class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>nums1;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            nums1.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }
        for(int i=0; i<nums1.size(); i++){
            ans.push_back(nums1[i]);
        }
        return ans;
    }
};
