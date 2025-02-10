class Solution {
public:
    string clearDigits(string s) {
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i]) && j > 0) {
                j--;
            }
            else{
                s[j++] = s[i];
            }
        }
        s.resize(j);
        return s;
    }
};
