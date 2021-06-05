
// First solution, using string as stack and an additional stack to save  previous counts
// Runtime: 20 ms, faster than 42.91% of C++ online submissions for Remove All Adjacent Duplicates in String II.
// Memory Usage: 9.8 MB, less than 46.54% of C++ online submissions for Remove All Adjacent Duplicates in String II.
class Solution {
public:
    string removeDuplicates(string s, int k) {
      string result = "";
      int count = 0;
      stack<int> prevCounts;
      
      for(size_t i = 0; i < s.size(); i++) {
        if(!result.empty() && s[i] != result.back()) {
          prevCounts.push(count);
          // Restart counter on different char and save it on stack
          count = 1;
        } else {
         count++;
        }
        result.push_back(s[i]);
        
        if(count == k) {
          while(count--) {
            result.pop_back();
          }
          count = 0;
          if(!prevCounts.empty()) {
              count = prevCounts.top();
              prevCounts.pop();
          }
        }
      }

      return result;
    }
};
