class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0, iw1 = 0, iw2 = 0;
        
        while(iw1 < word1.size() && iw2 < word2.size()) {
            if(word1[iw1][i] != word2[iw2][j]) return false;

            i++, j++;
            if(i == word1[iw1].size()) {
              i = 0;
              iw1++;
            }
            if(j == word2[iw2].size()) {
              j = 0;
              iw2++;
            }
        }
      
        
    
        return iw1 == word1.size() && iw2 == word2.size();
    }
};  
