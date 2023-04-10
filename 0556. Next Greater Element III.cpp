class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        next_permutation(s.begin(),s.end());
        string temp = s;
        prev_permutation(temp.begin(),temp.end());
        if(s<=temp) return -1;
        long long ans = stoll(s,nullptr,10);
        return (ans>INT_MAX || ans<INT_MIN)?-1:ans;
    }
};
