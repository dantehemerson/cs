class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;

        int rotations = 0;
        while (l <= r) {
            int m = l + (r - l) / 2;

            if (nums[l] > nums[m]) {
              if (m - l == 1) {
                rotations = m;
                break;
              } else {
                r = m;
              }
            } else if (nums[m] > nums[r]) {
              if (r - m == 1) {
                rotations = r;
                break;
              } else {
                l = m;
              }
            } else {
              // there are 0 rotations
              break;
            }
        }

        return nums[rotations];
    }
};
