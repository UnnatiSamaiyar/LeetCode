class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size()){
            swap(nums1,nums2);
        }
        unordered_map<int,int> mp;
        for(auto val: nums1){
            mp[val]++;
        }
        int i=0;
        for(auto val: nums2){
            if(mp[val] > 0){
                nums1[i++] = val;
                --mp[val];
            }
        }
        return vector<int>(nums1.begin(),nums1.begin()+i);
    }
};
