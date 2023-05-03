class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool flag = false;
        string ans1 = "";
        string ans2 = "";
        for(string c: word1){
            ans1 += c;
        }
        for(string d: word2){
            ans2 += d;
        }
        
        if(ans1==ans2){
            flag = true;
        }
        return flag;
    }
};
