class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for(auto &query: queries) {
          int switchingPositionForYou = 0;
          for(auto &point: points) {
            
            float d = sqrt(pow(point[0] - query[0], 2) + pow(point[1] - query[1], 2));
            
            if(d <= query[2])  {
              switchingPositionForYou++;
            } 
          }
          result.push_back(switchingPositionForYou);
        }

        return result;
    }
};
