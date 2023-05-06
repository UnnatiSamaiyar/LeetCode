class Solution {
public:
    int pivotInteger(int n) {
        int sumLeft = 0;
        int sumRight = 0;
        for (int i = 1; i <= n; i++) {
            sumRight += i;
        }
        for (int i = 1; i <= n; i++) {
            sumRight -= i;
            if (sumLeft == sumRight) {
                return i;
            }
            sumLeft += i;
        }
        return -1;
    }
};
