class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum = 0, i = num1.size()-1, j= num2.size()-1;
        string ans = "";
        while(i>=0 || j>=0|| sum>0){
            if(i>=0){
                sum += num1[i] - '0';
                i--;
            }
            if(j>=0){
                sum += num2[j] - '0';
                j--;
            }
            ans += char(sum%10+'0');
            sum /= 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
