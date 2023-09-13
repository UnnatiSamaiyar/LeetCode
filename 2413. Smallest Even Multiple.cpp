class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = INT_MAX;
        for(int i=1; i<=2*n; i++){
            if(i%2==0 && i%n==0){
                if(ans>i){
                    ans = i;
                }
            }
        }
        return ans;
    }
};
