class Solution {
public:
  map<char, bool> isVowel = {
    { 'a', true },
    { 'e', true },
    { 'i', true },
    { 'o', true },
    { 'u', true },
    { 'A', true },
    { 'E', true },
    { 'I', true },
    { 'O', true },
    { 'U', true },
  };

    string reverseVowels(string& s) {
      int L = 0;
      int R = s.size();
      while(L < R) {
        if(isVowel[s[L]] && isVowel[s[R]]) {
          swap(s[L], s[R]);
          L++;
          R--;
        } else {
          !isVowel[s[L]] ? L++ : R--;
        }
      }
      return s;
    }
};



// Faster solution
class Solution {
public:
    string reverseVowels(string& s) {
      int L = 0;
      int R = s.size();
      while(L < R) {
        if(isVowel(s[L]) && isVowel(s[R])) {
          swap(s[L], s[R]);
          L++;
          R--;
        } else {
          !isVowel(s[L]) ? L++ : R--;
        }
      }
      return s;
    }

    bool isVowel(char& c) {
      return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
          || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
