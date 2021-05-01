class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ops = 0;
        int quantity = 0;
        for(int i = 1; i < nums.size(); i++) {
            quantity = max(nums[i - 1] - nums[i] + 1, 0);
            nums[i] += quantity;
            ops += quantity;
        }
        return ops;
    }
};

// Turn off IO inefficiencies for all code during app startup, speeding up the testing framework code, Yes it works!
static const auto fast=[](){ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return nullptr;}();
