class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       stack<pair<int, int>> s;
       
       int result = 0;

       for (int i = 0; i < heights.size(); i++)  {
           int start = i;

           while (!s.empty() && s.top().second > heights[i]) {
               int index = s.top().first;
               int width = i - index;
               int height = s.top().second;

               s.pop();

               result = max(result, width * height);
               start = index;
           }

           s.push({ start, heights[i] });
       }

       while (!s.empty()) {
           int width = heights.size() - s.top().first;
           int height = s.top().second;
           s.pop();

           result = max(result, width * height);
       }

       return result;
    }
};
