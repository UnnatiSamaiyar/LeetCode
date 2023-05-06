class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a = INT_MAX, b = a;
        for(auto i : nums){
            if(i<=a) a = i;
            else if(i<=b) b = i;
            else return true;
        }
        return false;
    }
};
