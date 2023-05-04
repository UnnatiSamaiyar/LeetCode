class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0;
        for(auto ch: operations){
            if(ch[1]=='+'){
                ++count;
            }
            else{
                --count;
            }
        }
        return count;
    }
};
