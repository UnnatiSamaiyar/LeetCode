class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int ans=0;
        if(arrivalTime+delayedTime < 24){
            ans = arrivalTime+delayedTime;
        }
        if(arrivalTime+delayedTime >= 24){
            ans = arrivalTime+delayedTime - 24;
        }
        return ans;
    }
};
