class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp;
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1},{1,1}};
        temp.push_back({1});
        temp.push_back({1,1});

        for(int i=1; i<numRows-1; i++){
            vector<int>v;
            v.push_back(1);
            for(int j=0; j<temp[i].size()-1; j++){
                v.push_back(temp[i][j]+temp[i][j+1]);
            }
            v.push_back(1);
            temp.push_back(v);
        }
        return temp;
    }
};
