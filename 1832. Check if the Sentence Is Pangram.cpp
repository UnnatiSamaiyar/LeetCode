class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool flag = true;
        int arr[26] = {0};
        for(char ch: sentence){
            if(isalpha(ch)){
                arr[ch-'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (arr[i] == 0) {
                flag = false;
            }
        }
        return flag;
    }
};
