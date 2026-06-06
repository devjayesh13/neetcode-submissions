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
        int num = n/2;
        bool flag = false;
        while(!flag){
            if(guess(num) == 0) flag = true;
            else if(guess(num) == -1) num--;
            else if(guess(num) == 1) num++;
        }
        return num;
    }
};