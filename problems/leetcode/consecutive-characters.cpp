class Solution {
public:
    int maxPower(string s) {
      char prev = s[0];
      int maximum = 1, counter = 1;
      for(size_t i = 1; i < s.size(); i++) {
        if(s[i] == prev) counter++;
        else {
          prev = s[i];
          counter = 1;
        }
        maximum = max(counter, maximum);
      }
      return maximum;
    }
};
