class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> bils(3, 0);

        for (auto & bill : bills) {
            if (bill == 10 && bils[0] == 0) return false;
            if (bill == 20) {
                if (bils[0] == 0) return false;
                if (bils[1] == 0 && bils[0] < 3) return false;
            }
            if (bill == 5) bils[0]++;
            else if (bill == 10) {
                bils[1]++;
                bils[0]--;
            }
            else {
                if (bils[1] != 0) {
                    bils[1]--;
                    bils[0]--;
                } else {
                    bils[0] -= 3;
                }
            }
        }
        return true;
    }
};
