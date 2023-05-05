class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        vector<int>digit;
        int sum1 = 0;
        int sum2 = 0;
        int diff = 0;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            while(num>0){
                int d = num%10;
                digit.push_back(d);
                num = num/10;
            }
        }
        for(int i=0; i<nums.size(); i++){
            sum1 += nums[i];
        }
        for(int i=0; i<digit.size(); i++){
            sum2 += digit[i];
        }
        diff = abs(sum1 - sum2);
        return diff;
    }
};
