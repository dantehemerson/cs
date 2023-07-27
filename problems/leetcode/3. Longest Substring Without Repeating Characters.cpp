class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i < s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen; 
    }
};


// duh?
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;

        int MAX = 1;
        unordered_map<char, int> m;
        int i = 0;
        m[s[i]] = 0;
        
        for (int j = 1; j <= s.size() && i < j; j++) {
            if(j == s.size()) {
                MAX = max(MAX, j - i);
                break;
            }
          
           if (m.count(s[j])) {
              MAX = max(MAX, j - i);
              int newI = m[s[j]] + 1;
              i = max(newI, i);
              m[s[j]] = j;
           } else {
            m[s[j]] = j;
           }
        }

        return MAX;
    }
}
