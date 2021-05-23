// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Special Array With X Elements Greater Than or Equal X.
// Memory Usage: 8.2 MB, less than 86.09% of C++ online submissions for Special Array With X Elements Greater Than or Equal X.

class Solution {
public:
    int specialArray(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      
      int i;
      for(i = nums.size(); i >= 0; i--) {
        int counter = 0;
        for(auto j = nums.rbegin(); j != nums.rend(); j++) {
          if(*j >= i) counter++;
          else break; // no more because sorted
        }
        
        if(counter == i) return i;
      }
      
      return i;
    }
};
