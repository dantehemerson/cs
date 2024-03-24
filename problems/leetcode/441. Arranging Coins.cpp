class Solution {
public:
    int arrangeCoins(int n) {
        int l = 1;
        int r = n;
        int result = 0;

        while (l <= r) {
            int m = l + (r - l) / 2;
            long long  sum = (long double) m / 2 * (m + 1);

            if (sum <= n) {
                result = max(m, result);
                l = m + 1;
            } else {
                r = m - 1;
            }
        }

        return result;
    }
};

