class Solution {
public:
    int maxVowels(string s, int k) {
        string vowels = "aeiouAEIOU";
        int max_vowels = 0;
        int cur_vowels = 0;
        for (int i = 0; i < k; i++) {
            if (vowels.find(s[i]) != string::npos) {
                cur_vowels += 1;
            }
        }
        max_vowels = cur_vowels;
        for (int i = k; i < s.length(); i++) {
            if (vowels.find(s[i-k]) != string::npos) {
                cur_vowels -= 1;
            }
            if (vowels.find(s[i]) != string::npos) {
                cur_vowels += 1;
            }
            max_vowels = max(max_vowels, cur_vowels);
        }
        return max_vowels;
    }
};
