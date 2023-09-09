class Solution {
public:
    static bool compare(int x, int y){
        string xy = to_string(x) + to_string(y);
        string yx = to_string(y) + to_string(x);
        return xy > yx;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(), compare);
        string ans = "";
        for(int i : nums){
            ans += to_string(i);
        }
        if(ans[0]=='0'){
            return "0";
        }
        return ans;
    }
};
