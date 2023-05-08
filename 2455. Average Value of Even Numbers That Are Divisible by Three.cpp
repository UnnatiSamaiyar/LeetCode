class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0;
        int sum = 0;
        vector<int>temp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                if(nums[i]%3==0){
                    temp.push_back(nums[i]);
                }
            }
        }
        int n = temp.size();
        for(int i=0; i<temp.size(); i++){
            sum += temp[i];
            count = sum/n;
        }
        return count;
    }
};
