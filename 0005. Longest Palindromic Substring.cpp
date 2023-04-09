class Solution {
public:
       string longestPalindrome(string s) {  

      /* for calculating the size of string */
          int n = s.size() ; 

      /* Declare 2-D DP array  */    

    vector<vector<int>> dp(n+10,vector<int>(n+10,0)) ; 

    /* Ans  = for storing the length of max pallindromic substring 
       f for storing the final result */

    int ans = 0 ; string f = "" ; 

    //  base case if the size of string is 1 then return the string itself 

    if(n==1) return s ; 
    
    /*  x and y store the indexes of the substring  */

    int x = 0 , y = 0 ; 

    /* reversing the string to check if it's already a pallindrome */

    string t = s ; reverse(t.begin(),t.end()) ; if(s==t)return s ;
    
       /* In a 2-d Matrix we'll start from upper triangle if dp[i][i]=1 as single element are always pallindromic */

       /*  
           | b | a | b | a | d |
         b |   |   |   |   |   |
         b |   |   |   |   |   | 
       
       */

    for( int i = 0 ; i<n ; i++ ) dp[i][i]=1 ;
    
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = 2;
             x = i;
             y = i+1;
             ans = 2 ;
      }
      }

    for( int i = 2; i<n; i++ ) {
      for( int j = 0 ; (j+i)<n ; j++ ) {
        if(s[j]==s[j+i] && dp[j+1][j+i-1]) {
        dp[j][j+i]+=dp[j+1][j+i-1]+1; 
        if((i+1)>ans) {
            x=j , y=j+i;
            ans=dp[j][j+i]; 
      
        }}
      }  
    }
  f=s.substr(x,y-x+1);
  if(f.empty()) return f=s[0];
  else return f ;

}
};
