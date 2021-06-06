class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int min = 1;
        for(size_t i = 0; i < nums.size(); i++) {
            if(nums[i] <= 0) continue;
            if(min >= nums[i]) min = nums[i] + 1;
        }

        return min;
    }
};
