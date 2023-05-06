class Solution {
public:
    int divide(int dividend, int divisor) {
        signed int d = 0;
        if (dividend== -2147483648 && divisor == -1) return (2147483647);
        d = dividend/divisor;
        return d;
    }
};
