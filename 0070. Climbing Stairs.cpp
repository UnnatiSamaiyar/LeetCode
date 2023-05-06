class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int A[46];
        A[1]=1;
        A[2]=2;
        for(int i=3; i<=n; i++){
            A[i] = A[i-1]+A[i-2];
        }
        return A[n-1]+A[n-2];
    }
};
