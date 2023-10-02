class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sumWindow = accumulate(nums.begin(), nums.begin() + k - 1, 0);

        int l = 0;
        int r = k - 1;
        double maxAvg = -10e4;

        while (r < nums.size()) {
            sumWindow += nums[r];

            maxAvg = max(maxAvg, sumWindow / k);

            sumWindow -= nums[l];

            l++;
            r++;
        }

        return maxAvg;
    }
};
