class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int seconds = 0;
        for(int i = 0; i < points.size() - 1; i++) {
          int diago = min(abs(points[i][0] - points[i  + 1][0]), abs(points[i][1] - points[i  + 1][1]));
          int direct = max(abs(points[i][0] - points[i  + 1][0]), abs(points[i][1] - points[i  + 1][1])) - diago;
          
          seconds += diago + direct;
        }
        return seconds;
    }
};
