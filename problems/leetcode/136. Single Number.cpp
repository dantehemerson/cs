class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique = nums[0]; // this can be 0, but it's not necessary
       for(int i = 1; i < nums.size(); i++)  {
         unique ^= nums[i];
       }
      return unique;
    }
};
