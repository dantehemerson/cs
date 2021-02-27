
map<char, int> romans = {
    { 'I',  1 },
    { 'V',  5 },
    { 'X',  10 },
    { 'L',  50 },
    { 'C',  100 },
    { 'D',  500 },
    { 'M',  1000 },
};

map<char, map<char, bool>> subs = {
    { 'I',  { { 'V', true }, { 'X', true } } },
    { 'X',  { { 'L', true }, { 'C', true } } },
    { 'C',  { { 'D', true }, { 'M', true } } }

};

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        for(size_t i = 0; i < s.size(); i++) {
            char current = s[i];

            char next = s[i + 1];
            if(next && subs[current][next]) {
                result += romans[next] - romans[current];
                i++;
            } else {
                result += romans[current];
            }
        }
        return result;
    }
};
