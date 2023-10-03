/**
  Using sort to check permutation

  O(n * k^2)

  n: length of s2
  k: length of s1
*/
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        int k = s1.size();

        sort(s1.begin(), s1.end());

        for (int i = 0; i <= s2.size() - k; i++) {
            string subs = s2.substr(i, k);
            sort(subs.begin(), subs.end());

            if (subs == s1) {
                return true;
            }
        }

        return false;
    }
};


/**
  BEST SOLUTION:
*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        int k = s1.size();

       int countS1[26] = { 0 };

       for (int i = 0; i < s1.size(); i++) {
           countS1[s1[i] - 'a']++;
        }

        int countSub[26] = { 0 };

        int l = 0;
        int r = 0;

        for (r = 0; r < s1.size() - 1; r++) countSub[s2[r] - 'a']++;

        while (r < s2.size()) {
            countSub[s2[r] - 'a']++;

            bool isPermutation = true;
            for (int v = 0; v < 26; v++) {
                if (countS1[v] != countSub[v]) {
                    isPermutation = false;
                    break;
                }
            }

            if (isPermutation) {
                return true;
            }

            countSub[s2[l] - 'a']--;

            l++;
            r++;
        }

        return false;
    }
};
