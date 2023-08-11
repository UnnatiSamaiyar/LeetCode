class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        int n = image.size();
        int m = image[0].size();
        for(int i=0; i<n; i++){
            vector<int>row;
            for(int j=m-1; j>=0; j--){
                row.push_back(1-image[i][j]);
            }
            ans.push_back(row);
        }
        return ans;
    }
};
