class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        int k=0;
        for(auto x: strs){
            string s = x;
            sort(s.begin(),s.end());
            mp[s].push_back(x);
        }
        vector<vector<string>>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
