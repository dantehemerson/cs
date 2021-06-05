class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(size_t i = 0; i < nums.size(); i++) {
          int pos = abs(nums[i]);
          if(nums[pos - 1] < 0) {
            return pos;
          } else {
            nums[pos - 1] *= -1;
          }
        }

        return 0; // never called 
    }
};
