class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current = "";
        generate(result, current, n, 0, 0);
        return result;
    }
    
    void generate(vector<string>& result, string current, int n, int open, int close) {
        if (current.length() == n * 2) {
            result.push_back(current);
            return;
        }
        if (open < n) {
            generate(result, current + "(", n, open + 1, close);
        }
        if (close < open) {
            generate(result, current + ")", n, open, close + 1);
        }
    }
};
