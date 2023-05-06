class Solution {
public:
    bool isValid(string s) {
        stack<char>y;
        for(auto i:s){
            if(i=='(' || i=='{' || i=='['){
                y.push(i);
            }
            else{
                if( y.empty() || (i==')' && y.top()!='(') || (i=='}' && y.top()!='{') || (i==']' && y.top()!='[')){
                    return false;
                }
                y.pop();
            }
        }
        return y.empty();
    }
};

    
