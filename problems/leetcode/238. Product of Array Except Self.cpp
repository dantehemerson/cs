class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);

        int mult = nums.front(); // Space: O(1)
        // O(n)
        for(int i = 1; i < nums.size(); i++) {
            result[i] = mult;
            mult *= nums[i];
        }

        mult = nums.back();
        for(int i = nums.size() - 2; i >= 0; i--) {
            result[i] = result[i] * mult;
            mult *= nums[i];
        }

        return result;
    }
};
