class Solution {
public:
    bool halvesAreAlike(string s) {
        bool flag = false;
        int a=0;
        int b=0;
        int n1 = s.length()/2;

        for(int i=0; i<n1; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                a++;
            }
        }
        for(int j=n1; j<s.length(); j++){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'){
                b++;
            }
        }
        if(a==b){
            flag = true;
        }
        return flag;
    }
};
