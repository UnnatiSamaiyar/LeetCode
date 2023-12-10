class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int L = 0;
        int R = 0;
        int n = s.size();

        for(int i=0; i<n; i++){
            if(s[i]=='L'){
                L++;
            }
            else{
                R++;
            }
            if(L==R){
                ans++;
                L=0;
                R=0;
            }
        }
        return ans;
    }
};
