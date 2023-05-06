class Solution {
public:
    bool isSameAfterReversals(int num) {
        bool flag = false;
        int n = num;
        signed long r1 = 0;
        signed long r2 = 0;
        while(num!=0){
            int digit = num % 10;
            r1 = r1 * 10 + digit;
            num = num/10;
        }
        while(r1!=0){
            int digit = r1 % 10;
            r2 = r2 * 10 + digit;
            r1 = r1/10;
        }
        if(n==r2){
            flag = true;
        }
        return flag;
    }
};
