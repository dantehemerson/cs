class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int r = nums.size() / 2;

        int res = 10e5;
        while (l <= r) {
            int m = l + (r - l) / 2;
            int mIdx = m * 2;

            if (mIdx == nums.size() - 1 || nums[mIdx] != nums[mIdx + 1])  {
                res = min(res, nums[mIdx]);
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return res;
    }
};
