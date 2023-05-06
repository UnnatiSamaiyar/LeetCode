class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median = 0;
        vector<int> temp;
        for(int i=0; i<nums1.size(); i++){
            temp.push_back(nums1[i]);
        }
        for(int j=0; j<nums2.size(); j++){
            temp.push_back(nums2[j]);
        }
        sort(temp.begin(),temp.end());

        int size = temp.size();
        if(size%2==0){
            median = (temp[size/2-1]+temp[size/2])/2.0;
        }
        else{
            median = temp[size/2];
        }
        return median;
    }
};
