class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int l = 0;
        int r = 0;

        int longest = 0;
        while (r < nums.size()) {
            if (nums[r] > threshold) { // third condition
                r++;
                l = r;
            } else if (nums[l] % 2 == 1) { // first condition
                l++;
                r = max(l, r);
            } else if ((r - l >= 1) && (nums[r - 1] % 2 == nums[r] % 2)) { // second condition
                l = r;
            } else {
                longest = max(longest, r - l + 1);
                r++;
            }
        }

        return longest;
    }
};
