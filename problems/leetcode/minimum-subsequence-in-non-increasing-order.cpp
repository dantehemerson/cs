class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
      
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        int sum = 0;
        size_t i;
        for(i = 0; i < nums.size(); i++) {
          sum += nums[i];
          if(sum > (totalSum - sum)) {
            break;
          }
        }

        return vector<int>(nums.begin(), nums.begin() + i + 1);
    }
};
