class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_map<char, int> countS;

      int l = 0;
      int maxLength = 0;

      for (int r = 0; r < s.size(); r++) {
        countS[s[r]] = countS.count(s[r]) ? countS[s[r]] + 1  : 1;

        int maxCount = 0;
        for (char c = 'A'; c <= 'Z'; c++) {
          if (countS.count(c)) {
            if (maxCount < countS[c]) {
              maxCount = countS[c];
            }
          }
        }

        int windowSize = r - l + 1;

        if (windowSize - maxCount <= k) {
          maxLength = max(maxLength, windowSize);
        } else {
          countS[s[l]]--;
          l++;
        }
      }

      return maxLength;
    }
};
