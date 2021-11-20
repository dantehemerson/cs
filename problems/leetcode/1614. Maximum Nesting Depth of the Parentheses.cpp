class Solution {
public:
    int maxDepth(string s) {
      int counter = 0, max = 0;
      for(char &c: s) {
        if(c == '(') {
          counter++;
          if(counter > max) max = counter;
        } else if(c == ')') counter--;
      }
      return max;
    }
};
