class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(size_t i = 0; i < nums.size(); i++) {
          int pos = abs(nums[i]);
          if(nums[pos - 1] < 0) {
            result.push_back(pos);
          } else {
            nums[pos - 1] *= -1;
          }
        }
        return result;
    }
};
