class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        while(true) {
          char c;
          if(i < strs[0].size()) c = strs[0][i];
          else break;
          
          bool diffChar = false;
          for(int j = 1; j < strs.size(); j++) {
            if(i == strs[j].size() || c != strs[j][i] ) {
              diffChar = true;
              break;
            }
          }
          
          if(diffChar) break;
          i++;
        }
      
        return strs[0].substr(0, i);
    }
      
};
