// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Gap.
// Memory Usage: 5.7 MB, less than 95.69% of C++ online submissions for Binary Gap.
class Solution {
public:
    int binaryGap(int n) {
        int i = 0;
        int longest = 0;
        int previous1 = -1;
        while((1 << i) < n) {
          if(n & (1 << i)) { // is a 1
            if(previous1 < 0) {
              previous1 = i;
            } else {
              int distanceToPrevious1 = i - previous1;
              
              if(distanceToPrevious1 > longest) {
                longest = distanceToPrevious1;
                
              }
              
              previous1 = i;
              
            }
          }
          i++;
        }
        return longest;
    }
};
