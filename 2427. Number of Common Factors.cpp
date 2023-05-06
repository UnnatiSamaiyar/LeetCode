class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int>temp1;
        vector<int>temp2;
        int ans = 0;
        for(int i=1; i<=a; i++){
            if(a%i==0){
                temp1.push_back(i);
            }
        }
        for(int i=1; i<=b; i++){
            if(b%i==0){
                temp2.push_back(i);
            }
        }
        for(int i=0; i<temp1.size(); i++){
            for(int j=0; j<temp2.size(); j++){
                if(temp1[i]==temp2[j]){
                    ans++;
                }
            }
        }
        return ans;
    }
};
