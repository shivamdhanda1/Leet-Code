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
        int l = 1;
        int h = n;
        while(l <= h) {
        int g_no = l + (h-l)/2;
         int val = guess(g_no);
         if(val == 0) return g_no;
         else if(val == 1) l = g_no + 1;
         else if(val == -1) h = g_no - 1;
        }
        return -1;
    }
};