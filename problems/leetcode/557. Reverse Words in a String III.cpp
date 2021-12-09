class Solution {
public:
    string reverseWords(string& s) {
        int wsI = 0;
        for(int i = 0; i <= s.size(); i++) {
          if(i == s.size() || s[i] == ' ') {
            reverse(s.begin() + (wsI == 0 ? 0 : wsI + 1), s.begin() + i);
            wsI = i;
          }
        }
      
        return s;
    }
};
