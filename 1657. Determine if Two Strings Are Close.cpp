class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        unordered_map<char, int> count1, count2;
        unordered_set<char> s1, s2;

        for (char c : word1) {
            count1[c]++;
            s1.insert(c);
        }

        for (char c : word2) {
            count2[c]++;
            s2.insert(c);
        }

        vector<int> f1, f2;

        for (auto i : count1) {
            f1.push_back(i.second);
        }

        for (auto i : count2) {
            f2.push_back(i.second);
        }

        sort(f1.begin(), f1.end());
        sort(f2.begin(), f2.end());

        if (f1 == f2 && s1 == s2) {
            return true;
        }

        return false;
    }
};
