class Solution {
public:
    string reformat(string s) {
      queue<char> letters;
      queue<char> digits;
      
      for(const char &c: s) {
        if(c >= '0' && c <= '9') digits.push(c);
        else letters.push(c);
      }
      
      int diff = letters.size() - digits.size();
      
      if(abs(diff) >= 2) return "";
      
      auto* firstQ = diff == 1 ? &letters : &digits;
      auto* secondQ = firstQ == &letters ? &digits : &letters;
      
      string result;
      while(firstQ->size()) {
        result += firstQ->front();
        firstQ->pop();
        if(secondQ->size()) {
          result += secondQ->front();
          secondQ->pop();
        }
      }
      
      return result;
    }
};
