class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        stack<int>st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(st.size()==0){
                    s[i] = '.';
                }
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty()){
            s[st.top()] = '.';
            st.pop();
        }
        for(char c:s){
            if(c!='.'){
                ans+=c;
            }
        }
        return ans;
    }
};
