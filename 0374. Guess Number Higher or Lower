/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=1;
        int e=n;
        while(s<=e){
            long long int pick= s+(e-s)/2;
            if(guess(pick)==0){
                return pick;
            }
            else if(guess(pick)==1){
                s=pick+1;
            }
            else{
                e=pick-1;
            }
        }
        return -1;
    }
};
