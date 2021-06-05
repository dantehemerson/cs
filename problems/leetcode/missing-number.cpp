class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum = (nums.size() * (nums.size() + 1))/2;
        int sum = accumulate(nums.begin(), nums.end(), 0);
      
        return totalSum - sum;
    }
};
