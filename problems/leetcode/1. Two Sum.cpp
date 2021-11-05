/**
* O(n) solution
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> positions;
      
      for(int i = 0; i < nums.size(); i++) {
        positions[target - nums[i]] = i;
      }
      
      for(int i = 0; i < nums.size(); i++) {
        if(positions.count(nums[i]) && positions[nums[i]] != i) {
          return { positions[nums[i]], i};
        }
      }
      return {};
    }
};
