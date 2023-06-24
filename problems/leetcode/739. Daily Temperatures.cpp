// With stack O(n)
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int> result(temperatures.size(), 0);
       stack<pair<int, int>> s;

       s.emplace(temperatures[0], 0);

       for (int i = 1; i < temperatures.size(); i++) {
           while (!s.empty() && temperatures[i] > s.top().first) {
               int dayIth = s.top().second;
               result[dayIth] = i - dayIth;
               s.pop();
           }

           s.emplace(temperatures[i], i);
       }

       return result;
    }
}
