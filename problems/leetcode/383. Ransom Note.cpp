class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> counterMagazine(26);
        
        for(char &c: magazine) {
            counterMagazine[c - 'a']++;
        }
        
        for(char &c: ransomNote) {
            if(!counterMagazine[c - 'a']--) return false;
        }
        
        return true;
    }
};
