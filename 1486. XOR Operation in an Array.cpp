class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>temp;
        int ans = 0;
        for(int i=0; i<n; i++){
            int val = start + 2 * i;
            temp.push_back(val);
        }
        for(int i=0; i<temp.size(); i++){
            ans ^= temp[i];
        }
        return ans;
    }
};
