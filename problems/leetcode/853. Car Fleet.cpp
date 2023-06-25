class Solution {
public:
  int carFleet(int target, vector<int> &position, vector<int> &speed) {
    vector<pair<int, int>> v(position.size());

    for (int i = 0; i < position.size(); i++) {
      v[i] = {position[i], speed[i]};
    }

    sort(v.begin(), v.end());

    stack<float> s;

    for (int i = 0; i < v.size(); i++) {
      float time = (target - v[i].first) / (float)v[i].second;

      // if greater, s.top() will reach s[i] in some point, so it's a car fleet
      while (!s.empty() && time >= s.top()) {
        s.pop();
      }

      s.push(time);
    }

    return s.size();
  }
};
