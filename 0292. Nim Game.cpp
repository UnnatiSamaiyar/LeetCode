class Solution {
public:
    bool canWinNim(int n) {
        bool flag = true;
        if(n%4==0){
            flag = false;
        }
        return flag;
    }
};
