class Solution {
public:
    string minWindow(string s, string t) {
        if (t == "") return "";

        unordered_map<char, int> countT, countWindow;

        for (char &c: t) {
            countT[c]++;
        }

        int have = 0, need = countT.size();
        int resStart = -1;
        int resEnd = -1;
        int resSize = numeric_limits<int>::max();
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            countWindow[c]++;

            if (countT.count(c) > 0 && countWindow[c] == countT[c]) {
                have++;
            }

            while (have == need) {
                if (r - l + 1 < resSize) {
                    resStart = l;
                    resEnd = r;
                    resSize = r - l + 1;
                }

                countWindow[s[l]] -= 1;

                if (countT.count(s[l]) > 0 && countWindow[s[l]] < countT[s[l]]) {
                    have -= 1;
                }

                l += 1;
            }
        }

        return resSize != numeric_limits<int>::max() ? s.substr(resStart, resEnd - resStart + 1) : "";
    }
};
