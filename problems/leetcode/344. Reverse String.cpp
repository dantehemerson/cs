/* Trivial solution */
class Solution {
public:
    void reverseString(vector<char>& s) {
       int to = floor(s.size()/2);
        for(size_t i = 0; i < to; i++) {
            swap(s[i], s[s.size() - i - 1]);
        }
    }
};


/** Two pointers solution */
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size() - 1;
        while(l < r) {
            swap(s[l], s[r]);
            l++;r--;
        }
    }
};
