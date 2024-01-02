class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> frequency(nums.size()+1);
        vector<vector<int>> result;
        for(int num : nums){
            if(frequency[num] >= result.size()){
                result.push_back({});
            }
            result[frequency[num]].push_back(num);
            frequency[num]++;
        }
        return result;
    }
};
