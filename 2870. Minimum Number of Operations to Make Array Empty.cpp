class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto a: nums){
            mp[a]++;
        }

        int count = 0;
        for(auto a: mp){
            int s = a.second;
            if(s==1) return -1;
            count += s/3;
            if(s%3) count++;
        }
        return count;
    }
};
