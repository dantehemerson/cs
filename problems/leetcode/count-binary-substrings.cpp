class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0;
        int prev = 0, curr = 1;
      
      
        for(size_t i = 1; i < s.size(); i++) {
          if(s[i] == s[i - 1]){
            curr++;
          } else {
            count += min(curr, prev);
            prev = curr;
            curr = 1;
          }
        }
      
        count += min(prev, curr);
        return count;
    }
};
