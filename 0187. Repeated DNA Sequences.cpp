class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10) return {};
        unordered_map<string,int>mp;
        vector<string>v;
        for(int i=0; i<s.length()-9; i++) mp[s.substr(i,10)]++;
        for(auto i: mp){
            if(i.second>1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
