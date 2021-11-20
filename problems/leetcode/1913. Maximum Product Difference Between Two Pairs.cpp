/**
O(n)
Runtime: 16 ms, faster than 99.46% of C++ online submissions for Maximum Product Difference Between Two Pairs.
Memory Usage: 20.3 MB, less than 63.76% of C++ online submissions for Maximum Product Difference Between Two Pairs.
*/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      int a = 0, b = 0, c = std::numeric_limits<int>::max(), d = std::numeric_limits<int>::max();
      for(int i = 0; i < nums.size(); i++) {
         if(nums[i] > a) {
           b = a;
           a = nums[i];
         } else if(nums[i] > b) {
           b = nums[i];
         }
        
        if(nums[i] < c) {
           d = c;
           c = nums[i];
         } else if(nums[i] < d) {
           d = nums[i];
         }
      }

      return (a * b) - (c * d);
    }
};


class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      return (nums[nums.size() - 1] * nums[nums.size() - 2]) - (nums[0] * nums[1]);
    }
};
