class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        vector<int>v(4, 1);
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[0].size(); j++) {
                if(mat[i][j]!=target[i][j]){v[0]=0;}
                if(mat[i][j]!=target[mat.size()-j-1][i]){v[1]=0;}
                if(mat[i][j]!=target[mat.size()-i-1][mat.size()-j-1]){v[2]=0;}
                if(mat[i][j]!=target[j][mat.size()-i-1]){v[3]=0;}
            }
        }
        return v[0] || v[1] || v[2] || v[3];
    }
};
