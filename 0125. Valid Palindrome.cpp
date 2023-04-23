class Solution {
public:
    bool isPalindrome(string s) {
        bool flag = false;
        size_t i = 0;
        size_t len = s.length();
        while(i < len){
            if (!isalnum(s[i]) || s[i] == ' '){
                s.erase(i,1);
                len--;
            }else
                i++;
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string rev(s);
        reverse(rev.begin(),rev.end());
        cout<<s<<endl;
        cout<<rev<<endl;
        if(s==rev) {
            flag = true;
        }
        return flag;
    }
};
