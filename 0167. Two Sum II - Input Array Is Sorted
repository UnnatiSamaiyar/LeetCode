class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()-1;
        vector<int>temp;
        while(start<end){
            int total = numbers[start] + numbers[end];
            if(total == target){
                temp.push_back(start+1);
                temp.push_back(end+1);
                break;
            }
            else if(total>target) end--;
            else start++;
        }
        return temp;
    }
};
