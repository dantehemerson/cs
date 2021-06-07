class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for(size_t i = 0; i < nums.size(); i++) {
            int pos = abs(nums[i]) - 1;

            if(nums[pos] >= 1) {
                nums[pos] *= -1;
            }
        }

        for(size_t i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};
