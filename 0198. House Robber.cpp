class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size(), previous = 0, current = 0;
        for(int i=0; i<n; i++){
            int temp = max(previous + nums[i], current);
            previous = current;
            current = temp;
        }
        return current;
    }
};
