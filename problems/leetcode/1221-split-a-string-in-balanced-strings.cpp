class Solution {
public:
    int balancedStringSplit(string s) {
        int Lcount = 0, Rcount = 0, substrings = 0;

        for(char const &c: s) {
            c == 'L' ? Lcount++ : Rcount++;

            if(Lcount == Rcount) {
                substrings++;
                Lcount = Rcount = 0;
            }
        }

        return substrings;
    }
};
