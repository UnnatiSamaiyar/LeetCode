class AuthenticationManager {
public:
    int time = 0;
    unordered_map<string, int> mp;
    AuthenticationManager(int timeToLive) {
        this -> time = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        // calculating tht total time till the token expires
        int timeToLive = time + currentTime;
        mp[tokenId] = timeToLive;
    }
    
    void renew(string tokenId, int currentTime) {
        // if we find the string in the hashmap then only we will proceed
        if(mp.find(tokenId) != mp.end()){
            // checking whether the token has not expired
            if(mp[tokenId] > currentTime){
                mp[tokenId] = currentTime + time;
            }
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int cnt = 0;
        for(auto i: mp){
            if(i.second > currentTime){
                cnt++;
            }
        }
        return cnt;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */
