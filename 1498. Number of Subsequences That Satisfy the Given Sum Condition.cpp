class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int kMod = 1e9 + 7;
        int n = nums.size(), ans = 0;
        vector<int> pow2(n, 1);
        for (int i = 1; i < n; ++i)
            pow2[i] = (pow2[i - 1] * 2) % kMod;
        sort(nums.begin(), nums.end());
        for (int i = 0, j = n - 1; i <= j; ) {
            if (nums[i] + nums[j] > target) {
                --j;
            } else {
                ans = (ans + pow2[j - i++]) % kMod;
            }
        }
        return ans;
    }
};
