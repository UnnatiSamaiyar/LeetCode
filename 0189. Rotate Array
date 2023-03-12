class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+a);
        reverse(nums.begin()+a,nums.end());
    }
};
