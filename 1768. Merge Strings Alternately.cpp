class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x = 0;
        int y = 0;
        string s = "";
        while(x<word1.length() && y<word2.length()){
            s += word1[x++];
            s += word2[y++];
        }
        while(x<word1.length()){
            s += word1[x++];
        }
        while(y<word2.length()){
            s += word2[y++];
        }
        return s;
    }
};
