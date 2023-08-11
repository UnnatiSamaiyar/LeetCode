class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>temp;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                temp.push_back(i);
            }
        }
        
        if((k-1)<temp.size()){
            int ans = temp[k-1];
            return ans;
        }
        else{
            return -1;
        }
    }
};
