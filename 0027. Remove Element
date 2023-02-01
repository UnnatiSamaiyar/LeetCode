class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(nums[i]==val){
                count++;
                nums[i]=100;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-count;
    }
};
