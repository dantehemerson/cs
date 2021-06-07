class Solution {
public:
    // O(2N)
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        // multiply by -1 (position - 1) of item that exists.
        for(size_t i = 0; i < nums.size(); i++) {
            int pos = abs(nums[i]) - 1;

            if(nums[pos] >= 1) {
                nums[pos] *= -1;
            }
        }

        // Find all no flagged positions and return them.
        for(size_t i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};
