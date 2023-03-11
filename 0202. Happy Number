class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        if(n==2||n==3||n==4||n==5||n==6||n==8||n==9) return false;
        int sum = 0;
        while(n >= 0){
            sum += (n%10)*(n%10);
            n /= 10;
            if(n == 0){
                if(sum == 1) return true;
                if(sum==2||sum==3||sum==4||sum==5||sum==6||sum==8||sum==9) return false;
                n = sum;
                sum = 0;
            }
        }
        return false;
    }
};
