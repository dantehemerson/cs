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


/** (BEST SOLUTION)
  Using arr of english lowecase letters to check permutation

  O(n * k) little bit better than previous

  n: length of s2
  k: length of s1
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

        int countSub[26];

        for (int i = 0; i <= s2.size() - k; i++) {
            for (int j = 0; j < 26; j++) countSub[j] = 0;

            for (int j = i; j < i + k; j++) {
                countSub[s2[j] - 'a']++;
            }

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
        }

        return false;
    }
}


/**
  Using hash table to check permutation

  O(n * k) little bit better than previous

  n: length of s2
  k: length of s1
*/
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        int k = s1.size();

        unordered_map<char, int> countS1;
        for (int i = 0; i < s1.size(); i++) {
           countS1[s1[i]]++;
        }

        unordered_map<char, int> countSub;

        for (int i = 0; i <= s2.size() - k; i++) {
            countSub.clear();

            for (int j = i; j < i + k; j++) {
                countSub[s2[j]]++;
            }

            if (countSub.size() != countS1.size()) continue;

            bool isPermutation = true;
            for (const std::pair<const char, int>& pair : countS1) {
                if (pair.second != countSub[pair.first]) {
                    isPermutation = false;
                    break;
                }
            }

            if (isPermutation) {
                return true;
            }
        }

        return false;
    }
};
