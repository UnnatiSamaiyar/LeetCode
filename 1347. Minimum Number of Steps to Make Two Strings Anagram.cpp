class Solution {
public:
    int minSteps(string s, string t) {
        if(s.length()!=t.length()){
            return -1;
        }
        unordered_map<int, int>countS, countT;
        for(char ch: s){
            countS[ch]++;
        }
        for(char ch: t){
            countT[ch]++;
        }
        int steps = 0;
        for(const auto& pair: countS){
            char ch = pair.first;
            steps += max(0, countS[ch] - countT[ch]);
        }
        return steps;
    }
};
