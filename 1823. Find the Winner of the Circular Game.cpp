class Solution {
public:
    void solve(vector<int> & v, int k, int &ans,int index){
        if(v.size()==1){
            ans=v[0];
            return ;
        }
        index= (index+k)%v.size();
        v.erase(v.begin()+index);
        solve(v,k,ans,index);
    }
    int findTheWinner(int n, int k) {
        vector<int> v;
        int j=1;
       for(int i=0;i<n;i++){
           v.push_back(j);
           j++;
       }
       int ans=0;
       solve(v,k-1,ans,0);
       return ans;
    }
};
