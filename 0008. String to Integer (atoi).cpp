class Solution {
public:
    int myAtoi(string s) {
    int result = 0, sign = 1, i = 0;
    while (s[i] == ' ') { // skip leading whitespaces
        i++;
    }
    if (s[i] == '-' || s[i] == '+') { // check for sign
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9') { // process digits
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10)) { // check for overflow
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return result * sign;
}

};
