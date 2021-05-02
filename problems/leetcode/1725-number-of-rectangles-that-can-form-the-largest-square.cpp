// Greedy - Runtime 32ms FT 98.20
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int largest = 0, count = 0, maxLen;

        for(auto it = rectangles.begin(); it != rectangles.end(); it++) {
          maxLen = min(it->at(0), it->at(1));
          
          if(maxLen > largest) {
            largest = maxLen;
            count = 0;
          }
          
          if(maxLen == largest) count++;
        }
      
        return count;
    }
};
