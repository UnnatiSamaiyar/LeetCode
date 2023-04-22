class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        auto it = minmax_element(nums.begin(), nums.end());
        int max_idx = distance(nums.begin(), it.second);
        return max_idx;
    }
};
