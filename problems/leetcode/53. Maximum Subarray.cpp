/** Sliding Window like */
class Solution {
public:
    int maxSubArray(vector<int>& nums) { 
        int sum = nums[0]; // sum for every subarray possible
        int maxSum = sum;
        for(int i = 1; i < nums.size(); i++) {
          sum += nums[i];
          if(nums[i] > sum) sum = nums[i];
          if(sum > maxSum) maxSum = sum;
        }
      
        return maxSum;
    }
};
