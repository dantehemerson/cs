class Solution {
public:
    bool isSubsequence(string s, string t) {
       int sIdx = 0;

        for (int i = 0; i < t.size() && sIdx < s.size(); i++) {
            if (t[i] == s[sIdx]) {
                sIdx++;
            }
        }

        return sIdx == s.size();
    }
}
