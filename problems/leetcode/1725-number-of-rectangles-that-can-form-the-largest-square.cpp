// Greedy
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int, int> L;
        int maxLen;
        for(auto it = rectangles.begin(); it != rectangles.end(); it++) {
          maxLen = min(it->at(0), it->at(1));
          L[maxLen]++;
        }
      
        return L.rbegin()->second;
    }
};
