class NumArray {
public:
    vector<int> temp;
    int sum = 0;
    NumArray(vector<int>& nums) {
        temp = nums;
        sum = accumulate(temp.begin(),temp.end(),0);
    }
    
    int sumRange(int left, int right) {
        int ans = sum;
        for(int i=0; i<left; i++){
            ans -= temp[i];
        }
        for(int i=right+1; i<temp.size(); i++){
            ans -= temp[i];
        }
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
