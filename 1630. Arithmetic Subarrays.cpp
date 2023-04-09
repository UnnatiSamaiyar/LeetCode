class Solution {
public:

    // Helper function to check if the given 
    // subarray is an arithmetic sequence or not
    bool isAr(vector<int>& nums, int& l, int& r) {
        // If the length of the subarray is less than 2, then it can't be an arithmetic sequence
        if (r - l + 1 < 2) return false;

        // Copy the subarray into a new temporary vector and sort it
        vector<int> temp(nums.begin() + l, nums.begin() + r + 1);
        sort(temp.begin(), temp.end());

        // Calculate the difference between the first two elements of the sorted subarray
        int diff = temp[1] - temp[0];

        // Check if the difference between any two adjacent elements in the sorted subarray is the same as the initial difference
        for (int i = 0; i < temp.size() - 1; i++) {
            if (temp[i + 1] - temp[i] != diff) return false;
        }

        // If all elements satisfy the condition for an arithmetic sequence, return true
        return true;
    }


    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {

        // Initialize an empty vector to store the results of the subarray checks
        vector<bool> res;

        // Iterate over all pairs of indices specified in the l and r arrays
        for (int i = 0; i < l.size(); i++) {

            // Extract the corresponding subarray from the nums array using the current pair of indices
            int a = r[i];

            // Check if the subarray is an arithmetic sequence using the helper function
            bool r = isAr(nums, l[i], a);

            // Store the result of the check in the result vector
            res.push_back(r);
        }
        return res;
    }
};
