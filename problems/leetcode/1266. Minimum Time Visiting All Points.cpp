class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int seconds = 0;
        for(int i = 0; i < points.size() - 1; i++) {
          auto point = points[i];
          
          int diago = min(abs(point[0] - points[i  + 1][0]), abs(point[1] - points[i  + 1][1]));
          int direct = max(abs(point[0] - points[i  + 1][0]), abs(point[1] - points[i  + 1][1])) - diago;
          
          seconds += diago + direct;
        }
        return seconds;
    }
};
