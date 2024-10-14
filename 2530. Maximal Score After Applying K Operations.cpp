class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> maxHeap;

        for(int num : nums){
            maxHeap.push(num);
        }

        while(k-- > 0){
            int maxElement = maxHeap.top();
            maxHeap.pop();
            score += maxElement;

            int updatedElement = ceil(maxElement/3.0);
            maxHeap.push(updatedElement);
        }
        return score;
    }
};
