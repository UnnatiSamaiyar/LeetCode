class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int j = 0;
        long long product = 1;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            product *= nums[i];
            while(product>=k && j<=i){
                product /= nums[j];
                j++;
            }
            ans += (i-j+1);
        }
        return ans;
    }
};
