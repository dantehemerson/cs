class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string value = "";

        for(size_t i = 0; i < min(word1.size(), word2.size()); i++) {
          value += word1[i];
          value += word2[i];
        }
      
        if(word1.size() > word2.size()) {
          value += word1.substr(word2.size());
        } else {
          value += word2.substr(word1.size());
        }
      
        return value;
    }
};
