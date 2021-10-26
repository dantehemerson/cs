class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
      vector<int> A(nums.size());
      for(int i = 0; i < nums.size(); i++) {
        A[i] = nums[nums[i]];
      }
      return A;
    }
};
