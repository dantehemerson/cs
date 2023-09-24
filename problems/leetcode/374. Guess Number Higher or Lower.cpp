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
        int r = n;

        while (l <= r) {
            int m = l + (r - l) / 2;

            int g = guess(m);

            if (g == -1) {
                r = m - 1;
            } else if (g == 1) {
                l = m + 1;
            } else { // g == 0
                // pick
                return m;
            }
        }

        // never reaches
        return 0;
    }
};
