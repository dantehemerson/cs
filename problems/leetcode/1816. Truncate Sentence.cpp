class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int prevStart = 0, wordCount = 0;

        for(int i = 0; i <= s.size(); i++) {
          if(i == s.size() || s[i] == ' ') {
            ans += s.substr(prevStart, i - prevStart);
            
            if(++wordCount == k) break;
            
            ans += " ";
            prevStart = i + 1;
          } 
        }
        return ans;
    }
};
