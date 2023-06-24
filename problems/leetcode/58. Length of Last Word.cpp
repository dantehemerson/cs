// O(n)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        while(s[i] == ' ') {
           i--;
        }
        int end = i;

        while(i >= 0 && s[i] != ' ') {
            i--;
        }

        end = end - i;
        int start = i + 1;

        return s.substr(start, end).size();
    }
}
