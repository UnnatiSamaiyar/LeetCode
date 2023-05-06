class Solution {
public:
    int countDigits(int num) {
        int digit;
        int n = num;
        int count = 0;
        vector<int>temp;
        while(num!=0){
            digit = num%10;
            temp.push_back(digit);
            num /= 10;
        }
        for(int i=0; i<temp.size(); i++){
            if(n%temp[i]==0){
                count++;
            }
        }
        return count;
    }
};
