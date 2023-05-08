class Solution {
public:
    bool checkPerfectNumber(int num) {
        bool flag = false;
        int n = num;
        int sum = 0;
        vector<long>temp;
        for(int i=1; i<num; i++){
            if(num % i == 0){
                temp.push_back(i);
            }
        }
        for(int i=0; i<temp.size(); i++){
            cout<<temp[i]<<" ";
            sum += temp[i];
        }
        if(sum == n){
            flag = true;
        }
        return flag;
    }
};
