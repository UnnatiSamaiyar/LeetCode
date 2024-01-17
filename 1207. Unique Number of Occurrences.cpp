class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(auto ch: arr){
            mp[ch]++;
        }
        unordered_set<int>unique;
        for(auto& pair : mp){
            if(!unique.insert(pair.second).second){
                return false;
            }
        }
        return true;
    }
};
