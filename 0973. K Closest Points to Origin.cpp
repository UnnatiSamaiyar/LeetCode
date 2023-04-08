class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        int n=p.size();
        sort(p.begin(), p.end(), [&](vector<int> a, vector<int> b)
        {return sqrt(a[0]*a[0] + a[1]*a[1]) < sqrt(b[0]*b[0] + b[1]*b[1]);});

        for(int i=0; i<n-k; i++){
            p.pop_back();
        }


        return p;
    }
};
