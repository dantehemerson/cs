class Solution {
public:
    char findTheDifference(string s, string t) {
      sort(s.begin(), s.end());
      sort(t.begin(), t.end());

      for(size_t i = 0; i <  min(s.size(), t.size()); i++) {
        if(s[i] != t[i]) {
          return s.size() > t.size() ? s[i] : t[i];
        }
      }
      
      return s.size() > t.size() ? s[s.size() - 1] : t[t.size() - 1];
    }
};
