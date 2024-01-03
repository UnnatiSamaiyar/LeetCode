class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laser = 0, a = 0;
        for(int i=0; i<bank.size(); i++){
            int count_laser = count(bank[i].begin(), bank[i].end(), '1');
            if(count_laser==0) continue;
            laser += a * count_laser;
            a = count_laser;
        }
        return laser;
    }
};
