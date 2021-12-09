class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
      
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};


/**
Two pointers technique */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        for(int fast = 0; fast < nums.size(); fast++) {
          if(nums[fast] != 0) {
            swap(nums[slow], nums[fast]);
            slow++; // Slow now contains now a nonzero value
          }
        }
    }
};
