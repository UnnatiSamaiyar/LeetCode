class Solution {
public:
    bool check(vector<int>& nums) {
        int start=nums[0],end=nums[nums.size()-1];
        int midpos=-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
                midpos=i;
        }
        bool flag=true;
        for(int i=0;i<midpos;i++)
        {
            if(nums[i]>nums[i+1])
                   flag=false;
        }
        for(int i=midpos+1;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
                   flag=false;
        }
        if(midpos!=-1 && start<end)
            flag=false;
        return flag;
    }
};
