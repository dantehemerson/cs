class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int L = 0;
        int R = 0; // R is sum of all
        for (int i = 0; i < nums.size(); i++) R = R + nums[i];

        for (int i = 0; i < nums.size(); i++) {
            R = R - nums[i];

            if (L == R) {
                return i;
            }

            L = L + nums[i];
        }

        return -1;
    }
};
