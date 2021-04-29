class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> charsInSentence;
        
        for(char const &c: sentence) {
            charsInSentence.insert(c);
        }
        
        return charsInSentence.size() == 26;
    }
};
