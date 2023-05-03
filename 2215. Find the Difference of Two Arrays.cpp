class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        unordered_set<int> set3;
        for(auto i: set1){
            if(set2.find(i) != set2.end()){
                set3.insert(i);
            }
        }
        for(auto i: set3){
            set1.erase(i), set2.erase(i);
        }
        vector<vector<int>>ans;
        ans.push_back(vector<int>(set1.begin(),set1.end()));
        ans.push_back(vector<int>(set2.begin(),set2.end()));
        return ans;
    }
};
