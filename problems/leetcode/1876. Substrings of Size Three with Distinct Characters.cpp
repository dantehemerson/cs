class Solution {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3) return 0;

        unordered_map<char, int> countS = {};

        int i = 0;
        for (; i < 2; i++) {
            countS[s[i]]++;
        }

        int result = 0;
        for (; i < s.size(); i++) {
            countS[s[i]]++;

            // If count 3, all chars are differents
            int count = 0;
            for (const auto& pair : countS) {
                if (pair.second == 1) count++;
            }

            if (count == 3) {
                result++;
            }

            countS[s[i - 2]]--;
        }

        return result;
    }
};
