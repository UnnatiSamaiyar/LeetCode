class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> stk;
        int n= temp.size();
        vector<int> ans(n, 0);

        stk.push(0);
        for (int i = 1; i < temp.size(); i++) {
            while (!stk.empty() && temp[i] > temp[stk.top()]) {
                ans[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }

        return ans;
    }
};
