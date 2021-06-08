class Solution {
public:
    void reverseString(vector<char>& s) {
       int to = floor(s.size()/2);
        for(size_t i = 0; i < to; i++) {
            swap(s[i], s[s.size() - i - 1]);
        }
    }
};
