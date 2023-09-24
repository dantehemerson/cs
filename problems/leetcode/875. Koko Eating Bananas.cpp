class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int M = *max_element(piles.begin(), piles.end(), [](int a, int b) {
            return a < b;
        });

        int l = 1;
        int r = M;
        int result = r;

        while (l <= r) {
            int k = l + (r - l) / 2;

            long int sum = 0; // always have into account limits, if we sum int, then the sum can be more than in the int range.
            for (int i = 0; i < piles.size(); i++) {
                sum += ceil((double) piles[i] / k);
            }

            if (sum <= h) {
                result = min(result, k);
                r = k - 1;
            } else {
                l = k + 1;
            }
        }

        return result;
    }
};
