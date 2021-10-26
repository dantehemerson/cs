class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      int h = nums.size();
      for(int i = 0; i < h; i++) {
        nums.push_back(nums[i]);
      }
      return nums;
    }
};
