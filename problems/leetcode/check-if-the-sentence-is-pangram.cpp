class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> charsInSentence;
        
        for(char const &c: sentence) {
            charsInSentence.insert(c);
            
            // Early return
            if(charsInSentence.size() == 26) return true;
        }
        
        return false;
    }
};
