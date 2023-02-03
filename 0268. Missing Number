class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        int e=0;
        for(int i=1; i<=nums.size(); i++){
            s += i;
            e += nums[i-1];
        }
        return s-e;
    }
};
