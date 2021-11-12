class Solution {
public:
    bool isAnagram(string s, string t) {
         sort(s.begin(), s.end());
        sort(t.begin(), t.end());
      
        return s == t;
    }
};


// Faster solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> counterMagazine(26);
      
        if(s.size() != t.size()) return false;
      
        for(char &c: s) {
            counterMagazine[c - 'a']++;
        }
        
        for(char &c: t) {
            if(!counterMagazine[c - 'a']--) return false;
        }
        
        return true;
    }
};
